
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::FinalEnd_main(L2CFighterDonkey *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  long lVar7;
  uint uVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    lib::L2CValue::L2CValue(aLStack128,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    local_50 = uVar5 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack88 = _LUA_SCRIPT_LINE_STATUS_SHIFT;
    local_60 = LUA_SCRIPT_LINE_STATUS_SYSTEM;
    uStack72 = 0;
    app::KineticUtility::reset_enable_energy
              (iVar2,pBVar6,iVar3,(Vector2f *)&local_50,(Vector3f *)&local_60);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    lib::L2CValue::L2CValue(aLStack128,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    local_50 = uVar5 & 0xffffffff | (ulong)uVar8 << 0x20;
    uStack88 = _LUA_SCRIPT_LINE_STATUS_SHIFT;
    local_60 = LUA_SCRIPT_LINE_STATUS_SYSTEM;
    uStack72 = 0;
    app::KineticUtility::reset_enable_energy
              (iVar2,pBVar6,iVar3,(Vector2f *)&local_50,(Vector3f *)&local_60);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x92ee4d34c);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DONKEY_STATUS_FINAL_WORK_INT_MOTION_KIND_GROUND);
  lVar7 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xdf3b40b09);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DONKEY_STATUS_FINAL_WORK_INT_MOTION_KIND_AIR);
  lVar7 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DONKEY_STATUS_FINAL_FLAG_MOT_CHANGE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  FUN_710000c230(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  return;
}

