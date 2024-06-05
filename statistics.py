import pandas as pd
from scipy.stats import ttest_ind
import matplotlib.pyplot as plt

def ttest(file_path):
    benchmark = file_path.split('_')[-1].split('.')[0]
    data = pd.read_csv(file_path)
    data.head()
    
    columns_pairs = [
        ('coe', 'explore'),
        ('lin', 'explore'),
        ('exploit', 'explore'),
        ('quad', 'explore'),
        ('fast', 'explore')
    ]
    results = []
    for col1, col2 in columns_pairs:
        filtered_data_1 = [val for val in data[col1] if val != 0]
        filtered_data_2 = [val for val in data[col2] if val != 0]
        t_stat, p_value = ttest_ind(filtered_data_1, filtered_data_2)
        results.append((col1, col2, t_stat, p_value))

    results_df = pd.DataFrame(results, columns=['Column 1', 'Column 2', 'T-statistic', 'P-value'])

    results_df.to_csv(f'ttest_results_{benchmark}.csv', index=False)
    
def box_plot(file_path):
    benchmark = file_path.split('_')[-1].split('.')[0]
    data_set = pd.read_csv(file_path)
    columns = ['coe', 'explore', 'lin', 'exploit', 'quad', 'fast']
    filtered_data = pd.DataFrame()
    for col in columns:
        filtered_col = data_set[col][data_set[col] != 0]
        filtered_data[col] = filtered_col
        
    print(filtered_data)
    
    plt.figure(figsize=(12, 8))
    filtered_data.boxplot(column=columns)
    plt.title('Box plot of the different power schedules')
    plt.ylabel('# of mutations')
    plt.xticks(rotation=45)
    plt.savefig(f'{benchmark}_box_plot.png')
    plt.show()    
    
def main():
    file_path = 'agrregate_datadeps.csv'
    ttest(file_path)
    box_plot(file_path)

if __name__ == '__main__':
    main()