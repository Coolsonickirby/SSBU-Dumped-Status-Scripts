
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSimon::status::AttackHoldStart_main_loop(L2CFighterSimon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack80);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SIMON_STATUS_KIND_ATTACK_HOLD);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = 1;
      goto LAB_710001ec90;
    }
  }
  iVar3 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK_S3);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,0x11b762dbc9);
    lib::L2CValue::L2CValue(aLStack112,0x159a448604);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_FALL);
    lib::L2CValue::L2CValue(aLStack160,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
    FUN_71000171d0(aLStack64,this,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,
                   aLStack176);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,0x147c6d4a64);
    lib::L2CValue::L2CValue(aLStack112,0x183802e9be);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_FALL);
    lib::L2CValue::L2CValue(aLStack160,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
    FUN_71000171d0(aLStack64,this,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,
                   aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xbe8d1ccea);
    HVar5 = lib::L2CValue::as_hash(aLStack192);
    app::lua_bind::MotionModule__add_motion_2nd_impl(this->moduleAccessor,HVar5,0.0,1.0,false,1.0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    app::lua_bind::MotionModule__set_rate_2nd_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  iVar3 = 0;
LAB_710001ec90:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

