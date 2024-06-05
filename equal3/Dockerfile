ARG parent_image
FROM $parent_image

ADD seeds $FUZZ/seeds
ADD equal $FUZZ/equal
RUN chown -R $HOST_USER $FUZZ/equal

USER $HOST_USER
COPY build.sh $FUZZ/
RUN bash $FUZZ/fuzzer_build.sh
ENV BENCHMARK=equalError
ENV FUZZ_TARGET=$FUZZ/equal/equalError
ENV FUZZING_FLAG="@@"
