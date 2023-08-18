
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RosettaSpecialN_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  SituationKind SVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  Hash40 HVar15;
  float fVar16;
  uint in_stack_fffffffffffffeb4;
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KIRBY_GENERATE_ARTICLE_ROSETTATICOMISSILE);
  iVar5 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar5,false,-1);
  lib::L2CValue::_L2CValue(aLStack136);
  lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(this);
  lib::L2CValue::L2CValue(aLStack136,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack168,0x106f411784);
  uVar13 = lib::L2CValue::as_integer(aLStack136);
  uVar14 = lib::L2CValue::as_integer(aLStack168);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,uVar13,uVar14);
  lib::L2CValue::L2CValue(aLStack152,fVar16);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack200,0x16aa233382);
  HVar15 = lib::L2CValue::as_hash(aLStack200);
  uVar6 = app::lua_bind::FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_impl
                    (this->moduleAccessor,HVar15);
  lib::L2CValue::L2CValue(aLStack184,uVar6);
  lib::L2CValue::L2CValue(aLStack136,1.0);
  lib::L2CValue::operator_(aLStack184,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::operator_(aLStack168,aLStack152);
  lib::L2CValue::L2CValue(aLStack136,0.0);
  lib::L2CValue::operator_(aLStack184,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue
            (aLStack136,_FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_MOTION_RATE);
  fVar16 = (float)lib::L2CValue::as_number(aLStack200);
  iVar5 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar16,iVar5);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::L2CValue(aLStack216,0x27b8f55c7f);
  lib::L2CValue::L2CValue(aLStack232,0x2401a4e59e);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::L2CValue(aLStack136,false);
  uVar13 = lib::L2CValue::operator__(aLStack200,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack136,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack216,GROUND_CORRECT_KIND_KEEP);
    lib::L2CValue::L2CValue(aLStack232,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack248,true);
    lib::L2CValue::L2CValue(aLStack264,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack280,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack296,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack312,0);
    SVar7 = lib::L2CValue::as_integer(aLStack136);
    iVar5 = lib::L2CValue::as_integer(aLStack200);
    uVar6 = lib::L2CValue::as_integer(aLStack216);
    GVar8 = lib::L2CValue::as_integer(aLStack232);
    bVar1 = lib::L2CValue::as_bool(aLStack248);
    iVar9 = lib::L2CValue::as_integer(aLStack264);
    iVar10 = lib::L2CValue::as_integer(aLStack280);
    iVar11 = lib::L2CValue::as_integer(aLStack296);
    lib::L2CValue::as_integer(aLStack312);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar7,iVar5,uVar6,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
               in_stack_fffffffffffffeb4);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::L2CValue(aLStack136,false);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack216,false);
    lib::L2CValue::L2CValue(aLStack232,false);
    lib::L2CValue::L2CValue(aLStack248,false);
    lib::L2CValue::L2CValue
              (aLStack264,
               _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N |
               FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK |
               FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON | _FIGHTER_LOG_MASK_FLAG_SHOOT);
    lib::L2CValue::L2CValue(aLStack280,_FIGHTER_STATUS_ATTR_START_TURN);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack312,0);
    bVar1 = lib::L2CValue::as_bool(aLStack136);
    iVar5 = lib::L2CValue::as_integer(aLStack200);
    bVar2 = lib::L2CValue::as_bool(aLStack216);
    bVar3 = lib::L2CValue::as_bool(aLStack232);
    bVar4 = lib::L2CValue::as_bool(aLStack248);
    uVar13 = lib::L2CValue::as_integer(aLStack264);
    uVar6 = lib::L2CValue::as_integer(aLStack280);
    uVar12 = lib::L2CValue::as_integer(aLStack296);
    lib::L2CValue::as_integer(aLStack312);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
               (bool)(bVar4 & 1),uVar13,uVar6,uVar12,in_stack_fffffffffffffeb4);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KIRBY_STATUS_KIND_ROSETTA_SPECIAL_N_RETURN);
    iVar5 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

