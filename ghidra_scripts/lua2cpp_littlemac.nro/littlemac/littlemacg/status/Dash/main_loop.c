
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLittlemacLittlemacg::status::Dash_main_loop
          (L2CWeaponLittlemacLittlemacg *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  float *pfVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  undefined8 *this_03;
  undefined4 uVar9;
  undefined4 uVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 auStack112 [2];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  FUN_7100027f70();
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    this_03 = &local_50;
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) == 0) goto LAB_7100028da4;
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack112,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack112);
    pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack176,*pfVar8);
    lib::L2CValue::L2CValue(aLStack160,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar8[2]);
    FUN_7100005790(aLStack128,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
    uVar9 = lib::L2CValue::as_number(this_00);
    uVar10 = lib::L2CValue::as_number(this_01);
    uVar4 = lib::L2CValue::as_number(this_02);
    local_50 = CONCAT44(uVar10,uVar9);
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack128);
    this_03 = auStack112;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_03);
LAB_7100028da4:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_LITTLEMAC_LITTLEMACG_STATUS_KIND_ATTACK);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

