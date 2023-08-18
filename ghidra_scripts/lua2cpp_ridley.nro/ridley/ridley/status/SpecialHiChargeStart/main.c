
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialHiChargeStart_main(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  ulong uStack96;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_F);
  uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_B);
    uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_HI);
      uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&uStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_LW);
        uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
        lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
        if ((uVar4 & 1) == 0) goto LAB_710000e27c;
        lib::L2CValue::L2CValue((L2CValue *)&uStack96,0x1e862b723e);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&uStack96);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&uStack96,0x1e18488a59);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&uStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,0x1d1072b786);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&uStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,0x1d171f739f);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&uStack96);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
LAB_710000e27c:
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&uStack96);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_TYPE_MOTION);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack176,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = lib::L2CValue::as_number(aLStack192);
  uVar9 = lib::L2CValue::as_number(aLStack208);
  uStack96 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
  uStack104 = LUA_SCRIPT_LINE_MAP_CORRECTION;
  local_70 = LUA_SCRIPT_LINE_STATUS_SHIFT;
  uStack88 = 0;
  app::KineticUtility::reset_enable_energy
            (iVar2,pBVar6,iVar3,(Vector2f *)&uStack96,(Vector3f *)&local_70);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,SpecialHiChargeStart_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

