
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::SpecialHi_pre(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  SituationKind SVar5;
  int iVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *this_00;
  ulong uVar13;
  uint in_stack_fffffffffffffed4;
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue
            (aLStack136,
             FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON |
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_01);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  uVar13 = lib::L2CValue::operator__(this_00,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack152,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack168,1);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack152);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack168);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack184);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack200);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::operator_(aLStack136,aLStack152);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack184,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack200,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack216,true);
  lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack264,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack280,0);
  SVar5 = lib::L2CValue::as_integer(aLStack152);
  iVar6 = lib::L2CValue::as_integer(aLStack168);
  uVar7 = lib::L2CValue::as_integer(aLStack184);
  GVar8 = lib::L2CValue::as_integer(aLStack200);
  bVar1 = lib::L2CValue::as_bool(aLStack216);
  iVar9 = lib::L2CValue::as_integer(aLStack232);
  iVar10 = lib::L2CValue::as_integer(aLStack248);
  iVar11 = lib::L2CValue::as_integer(aLStack264);
  lib::L2CValue::as_integer(aLStack280);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar5,iVar6,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffed4);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,false);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue
            (aLStack232,FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE | _FIGHTER_STATUS_ATTR_START_TURN);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_HI);
  lib::L2CValue::L2CValue(aLStack264,0);
  bVar1 = lib::L2CValue::as_bool(aLStack152);
  iVar6 = lib::L2CValue::as_integer(aLStack168);
  bVar2 = lib::L2CValue::as_bool(aLStack184);
  bVar3 = lib::L2CValue::as_bool(aLStack200);
  bVar4 = lib::L2CValue::as_bool(aLStack216);
  uVar13 = lib::L2CValue::as_integer(aLStack136);
  uVar7 = lib::L2CValue::as_integer(aLStack232);
  uVar12 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffed4);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

