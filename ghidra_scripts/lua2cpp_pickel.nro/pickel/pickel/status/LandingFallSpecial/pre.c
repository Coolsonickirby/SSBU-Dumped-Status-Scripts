
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::LandingFallSpecial_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_landing_fall_special(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_LANDING_FLAG);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_LANDING_INT);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_LANDING_FLOAT);
    lib::L2CValue::L2CValue(aLStack128,false);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LADDER);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_LANDING_HIGH_PLACE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack176,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack192,0x18fc0e91ae);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack128,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
      }
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_LANDING_FLAG_HIGH_PLACE);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar2 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,aLStack80);
    lib::L2CValue::L2CValue(aLStack144,aLStack96);
    lib::L2CValue::L2CValue(aLStack160,aLStack112);
    lua2cpp::L2CFighterCommon::status_pre_landing_fall_special_common
              (this,(L2CValue)0xc0,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

