
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000297c0(L2CFighterRyu *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_WALK_BACK);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_TURN_RUN_BACK);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      HVar4 = 0x4fb50df0c;
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_FALL_FLAG_DISABLE_MOTION_INTP);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::~L2CValue(aLStack80);
      HVar4 = 0xa72140950;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,HVar4);
    return;
  }
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0xde71330c3);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,HVar4);
  lib::L2CValue::L2CValue(aLStack80,0xb1de0f39d);
  uVar3 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xdae4249e4);
    uVar3 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack176,0x1adb5c9cb0);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack176,0x18d4036a58);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack176,0x1c48431568);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack176,0x1ace89a287);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
    lib::L2CValue::L2CValue(aLStack176,0x1ab2c7f9db);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
    lib::L2CValue::L2CValue(aLStack176,0x18a1e156dd);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator=(aLStack112,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  uVar3 = lib::L2CValue::operator<(aLStack112,aLStack128);
  if ((uVar3 & 1) == 0) {
    uVar3 = lib::L2CValue::operator<=(aLStack128,aLStack96);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = lib::L2CValue::operator<(aLStack96,aLStack112), (uVar3 & 1) == 0))
    goto LAB_7100029ca8;
    lib::L2CValue::L2CValue(aLStack80,0xdf1abbeb9);
    lib::L2CValue::operator=((L2CValue *)return_value,aLStack80);
  }
  else {
    uVar3 = lib::L2CValue::operator<(aLStack96,aLStack112);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = lib::L2CValue::operator<=(aLStack128,aLStack96), (uVar3 & 1) == 0))
    goto LAB_7100029ca8;
    lib::L2CValue::L2CValue(aLStack80,0xdf1abbeb9);
    lib::L2CValue::operator=((L2CValue *)return_value,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100029ca8:
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_FALL_FLAG_DISABLE_MOTION_INTP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

