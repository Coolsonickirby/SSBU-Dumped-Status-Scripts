
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRichterCoffin::status::Normal_main_loop
          (L2CWeaponRichterCoffin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  undefined8 *this_02;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 auStack128 [2];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x50000000);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) goto LAB_7100020108;
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_7100020108;
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_STATUS_KIND_FINAL);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_SIMON_STATUS_KIND_FINAL_READY);
      uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      if ((uVar5 & 1) != 0) goto LAB_710001fe9c;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar9,false);
      this_02 = &local_50;
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
LAB_710001fe9c:
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_X);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack128,0x18cdc1683);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack128,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_Z);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack128,0x162d277af);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack128,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack128,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack128,0x162d277af);
      uVar10 = lib::L2CValue::as_number(pLVar8);
      uVar11 = lib::L2CValue::as_number(this_00);
      uVar4 = lib::L2CValue::as_number(this_01);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = (ulong)uVar4;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar9 = (float)app::lua_bind::PostureModule__base_scale_impl(pBVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar9,false);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      this_02 = auStack128;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_02);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100020108:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

