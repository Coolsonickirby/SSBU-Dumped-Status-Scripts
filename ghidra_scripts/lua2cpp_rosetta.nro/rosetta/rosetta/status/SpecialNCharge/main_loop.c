
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRosetta::status::SpecialNCharge_main_loop(L2CFighterRosetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLAG_CHARGE_SKIP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1011ca9abe);
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_INT_MOTION_KIND_GROUND);
          lVar5 = lib::L2CValue::as_integer(aLStack80);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x14907f15fe);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_INT_MOTION_KIND_AIR);
          lVar5 = lib::L2CValue::as_integer(aLStack80);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack160,0x106f411784);
          uVar4 = lib::L2CValue::as_integer(aLStack144);
          uVar6 = lib::L2CValue::as_integer(aLStack160);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack128,fVar7);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          lib::L2CValue::operator_(aLStack128,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_FLOAT_CHARGE_FRAME);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue(aLStack80,aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_INT_MOTION_KIND_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar5);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROSETTA_STATUS_SPECIAL_N_INT_MOTION_KIND_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,lVar5);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_MOTION_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      FUN_710000ad00(this,aLStack80,aLStack112,aLStack144,aLStack176,aLStack192,aLStack208,
                     aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROSETTA_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

