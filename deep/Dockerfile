ARG parent_image
FROM $parent_image

ADD seeds $FUZZ/seeds
ADD deep $FUZZ/deep
RUN chown -R $HOST_USER $FUZZ/deep

USER $HOST_USER
COPY build.sh $FUZZ/
RUN bash $FUZZ/fuzzer_build.sh
ENV BENCHMARK=deepError
ENV FUZZ_TARGET=$FUZZ/deep/deepError
ENV FUZZING_FLAG="@@"
