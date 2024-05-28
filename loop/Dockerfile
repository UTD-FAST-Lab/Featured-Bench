ARG parent_image
FROM $parent_image

ADD seeds $FUZZ/seeds
ADD loop $FUZZ/loop
RUN chown -R $HOST_USER $FUZZ/loop

USER $HOST_USER
COPY build.sh $FUZZ/
RUN bash $FUZZ/fuzzer_build.sh
ENV BENCHMARK=loopError
ENV FUZZ_TARGET=$FUZZ/loop/loopError
ENV FUZZING_FLAG="@@"
