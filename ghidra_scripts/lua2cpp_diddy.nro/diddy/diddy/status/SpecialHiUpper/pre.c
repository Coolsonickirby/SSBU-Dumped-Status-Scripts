
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiUpper_pre(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  SituationKind SVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *this_00;
  ulong uVar13;
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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_INT_SITUATION);
  iVar5 = lib::L2CValue::as_integer(this_00);
  iVar6 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack168,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
  lib::L2CValue::L2CValue(aLStack184,true);
  lib::L2CValue::L2CValue(aLStack200,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLAG);
  lib::L2CValue::L2CValue(aLStack216,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_INT);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLOAT);
  lib::L2CValue::L2CValue(aLStack248,0);
  SVar7 = lib::L2CValue::as_integer(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack136);
  uVar8 = lib::L2CValue::as_integer(aLStack152);
  GVar9 = lib::L2CValue::as_integer(aLStack168);
  bVar1 = lib::L2CValue::as_bool(aLStack184);
  iVar6 = lib::L2CValue::as_integer(aLStack200);
  iVar10 = lib::L2CValue::as_integer(aLStack216);
  iVar11 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar7,iVar5,uVar8,GVar9,(bool)(bVar1 & 1),iVar6,iVar10,iVar11,
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
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_HI |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_HI);
  lib::L2CValue::L2CValue(aLStack248,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack136);
  bVar2 = lib::L2CValue::as_bool(aLStack152);
  bVar3 = lib::L2CValue::as_bool(aLStack168);
  bVar4 = lib::L2CValue::as_bool(aLStack184);
  uVar13 = lib::L2CValue::as_integer(aLStack200);
  uVar8 = lib::L2CValue::as_integer(aLStack216);
  uVar12 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar13,uVar8,uVar12,in_stack_fffffffffffffef4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

