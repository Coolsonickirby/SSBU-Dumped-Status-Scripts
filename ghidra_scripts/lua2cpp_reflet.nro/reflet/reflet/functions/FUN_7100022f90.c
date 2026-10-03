
void FUN_7100022f90(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  L2CValue *this;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
LAB_7100023098:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(param_1,0);
    }
    else {
      this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(this,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack160,aLStack80);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(param_1,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_2,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_2);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator==(aLStack144,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) goto LAB_7100023098;
    }
    lib::L2CValue::L2CValue(param_1,1);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

