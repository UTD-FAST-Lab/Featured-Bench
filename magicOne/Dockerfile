ARG parent_image
FROM $parent_image

ADD seeds $FUZZ/seeds
ADD magicOne $FUZZ/magicOne
RUN chown -R $HOST_USER $FUZZ/magicOne

USER $HOST_USER
COPY build.sh $FUZZ/
RUN bash $FUZZ/fuzzer_build.sh
ENV BENCHMARK=magicOneError
ENV FUZZ_TARGET=$FUZZ/magicOne/magicOneError
ENV FUZZING_FLAG="@@"
