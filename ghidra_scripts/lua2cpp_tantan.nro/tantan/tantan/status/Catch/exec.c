
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterTantan::status::Catch_exec(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  lib::L2CValue::L2CValue(aLStack80,0x5c56b7b64);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar3);
    lib::L2CValue::L2CValue(aLStack80,0xb73650128);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_CATCH_FLAG_START_REACH);
      lib::L2CValue::L2CValue(aLStack112,0xcefc01510);
      FUN_710001dae0(this,aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_CATCH_START_COUNT);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_CATCH_START_COUNT);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,iVar2);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0xb7d64dc59);
        lib::L2CValue::L2CValue(aLStack144,0x1d02faeeca);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack144,0xb7d64dc59);
        lib::L2CValue::L2CValue(aLStack160,0x1d9bf3bf70);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack128,fVar6);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack160,0x9cc7049fd);
        lib::L2CValue::L2CValue(aLStack176,aLStack80);
        lib::L2CValue::L2CValue(aLStack192,aLStack128);
        lib::L2CValue::L2CValue(aLStack208,false);
        FUN_710001dc60(aLStack144,this,aLStack160,aLStack176,aLStack192,aLStack208);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          return;
        }
        lib::L2CValue::_L2CValue(aLStack128);
        this_00 = aLStack80;
        goto LAB_710001b254;
      }
      FUN_710001e690(aLStack80,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) goto LAB_710001bb44;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_CATCH_FLAG_START_REACH);
    lib::L2CValue::L2CValue(aLStack112,0xb73650128);
    FUN_710001dae0(this,aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = aLStack96;
LAB_710001b254:
    lib::L2CValue::_L2CValue(this_00);
  }
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,HVar3);
  lib::L2CValue::L2CValue(aLStack80,0x9cc7049fd);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) goto LAB_710001bb44;
  lib::L2CValue::L2CValue(aLStack80,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack144,0x11aa9d5d9b);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack224,0x1edbb585ee);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack240,0x12ceee1a77);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack224,fVar6);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack256,0x126e42c2ef);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack240,iVar2);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack272,0x1f52403c37);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack256,iVar2);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack288,0x13994270cd);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack288);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack272,fVar6);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_CATCH_FLOAT_SPIRAL_MOTION_RATE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack288,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TANTAN_STATUS_CATCH_FLAG_START_REACH);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_TANTAN_STATUS_CATCH_FLOAT_SPIRAL_MOTION_RATE);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_TANTAN_STATUS_CATCH_INT_REACH_STOP_COUNT);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_TANTAN_STATUS_CATCH_INT_REACH_COUNT);
  lib::L2CValue::L2CValue(aLStack384,0xd12a4934e);
  lib::L2CValue::L2CValue(aLStack400,0xde8abae2d);
  lib::L2CValue::L2CValue(aLStack416,0x9cc7049fd);
  lib::L2CValue::L2CValue(aLStack432,0xb96ecd4a3);
  lib::L2CValue::L2CValue(aLStack448,0xb6ce3e9c0);
  lib::L2CValue::L2CValue(aLStack464,aLStack128);
  lib::L2CValue::L2CValue(aLStack480,aLStack240);
  lib::L2CValue::L2CValue(aLStack496,aLStack144);
  lib::L2CValue::L2CValue(aLStack512,aLStack224);
  lib::L2CValue::L2CValue(aLStack528,aLStack256);
  lib::L2CValue::L2CValue(aLStack544,aLStack272);
  FUN_710001ead0(aLStack304,this,aLStack320,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400,
                 aLStack416,aLStack432,aLStack448,aLStack464,aLStack480,aLStack496,aLStack512,
                 aLStack528,aLStack544);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack560,HVar3);
  lib::L2CValue::L2CValue(aLStack80,0x5c56b7b64);
  uVar4 = lib::L2CValue::operator__(aLStack560,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack576,HVar3);
    lib::L2CValue::L2CValue(aLStack80,0x9cc7049fd);
    uVar4 = lib::L2CValue::operator__(aLStack576,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator__(aLStack304,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack560,_FIGHTER_TANTAN_STATUS_CATCH_FLOAT_SPIRAL_MOTION_RATE);
        iVar2 = lib::L2CValue::as_integer(aLStack560);
        fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        fVar6 = (float)lib::L2CValue::as_number(aLStack80);
        app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar6);
        lib::L2CValue::_L2CValue(aLStack80);
        goto LAB_710001ba14;
      }
      fVar6 = (float)lib::L2CValue::as_number(aLStack288);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar6);
    }
  }
  else {
LAB_710001ba14:
    lib::L2CValue::_L2CValue(aLStack560);
  }
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710001bb44:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

