
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RefletSpecialN_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  SituationKind SVar6;
  int iVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  void *pvVar15;
  Fighter *pFVar16;
  uint in_stack_fffffffffffffef4;
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(this);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack184,true);
  lib::L2CValue::L2CValue(aLStack200,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack248,0);
  SVar6 = lib::L2CValue::as_integer(aLStack120);
  iVar7 = lib::L2CValue::as_integer(aLStack136);
  uVar8 = lib::L2CValue::as_integer(aLStack152);
  GVar9 = lib::L2CValue::as_integer(aLStack168);
  bVar2 = lib::L2CValue::as_bool(aLStack184);
  iVar10 = lib::L2CValue::as_integer(aLStack200);
  iVar11 = lib::L2CValue::as_integer(aLStack216);
  iVar12 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar7,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
             in_stack_fffffffffffffef4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack152,false);
  lib::L2CValue::L2CValue(aLStack168,false);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue
            (aLStack200,
             FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON | _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N)
  ;
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_ATTR_START_TURN);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack248,0);
  bVar2 = lib::L2CValue::as_bool(aLStack120);
  iVar7 = lib::L2CValue::as_integer(aLStack136);
  bVar3 = lib::L2CValue::as_bool(aLStack152);
  bVar4 = lib::L2CValue::as_bool(aLStack168);
  bVar5 = lib::L2CValue::as_bool(aLStack184);
  uVar14 = lib::L2CValue::as_integer(aLStack200);
  uVar8 = lib::L2CValue::as_integer(aLStack216);
  uVar13 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar2 & 1),iVar7,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
             (bool)(bVar5 & 1),uVar14,uVar8,uVar13,in_stack_fffffffffffffef4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pvVar15 = (void *)app::sv_system::battle_object(this->luaStateAgent);
  if (pvVar15 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack120,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,pvVar15);
  }
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
  pFVar16 = (Fighter *)lib::L2CValue::as_pointer(aLStack120);
  iVar7 = lib::L2CValue::as_integer(aLStack136);
  app::FighterSpecializer_Reflet::change_hud_kind(pFVar16,iVar7);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
  iVar7 = lib::L2CValue::as_integer(aLStack152);
  iVar7 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar7);
  lib::L2CValue::L2CValue(aLStack136,iVar7);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_REFLET_MAGIC_KIND_TRON);
  uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  bVar1 = (uVar14 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_TRON_START);
    iVar7 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar7);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar1);
  return;
}

