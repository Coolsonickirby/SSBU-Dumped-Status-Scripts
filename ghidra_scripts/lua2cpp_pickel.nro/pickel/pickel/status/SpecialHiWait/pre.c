
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHiWait_pre(L2CFighterPickel *this,L2CValue *return_value)

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
  ulong uVar13;
  uint in_stack_fffffffffffffec4;
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
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_HI_FLAG);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_HI_INT);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_HI_FLOAT);
  lib::L2CValue::L2CValue(aLStack168,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack200,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack216,GROUND_CLIFF_CHECK_KIND_ALWAYS);
  lib::L2CValue::L2CValue(aLStack232,true);
  lib::L2CValue::L2CValue(aLStack248,FS_SUCCEEDS_KEEP_VISIBILITY);
  SVar5 = lib::L2CValue::as_integer(aLStack168);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  uVar7 = lib::L2CValue::as_integer(aLStack200);
  GVar8 = lib::L2CValue::as_integer(aLStack216);
  bVar1 = lib::L2CValue::as_bool(aLStack232);
  iVar9 = lib::L2CValue::as_integer(aLStack120);
  iVar10 = lib::L2CValue::as_integer(aLStack136);
  iVar11 = lib::L2CValue::as_integer(aLStack152);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar5,iVar6,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack168,false);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_HI);
  lib::L2CValue::L2CValue(aLStack264,0);
  lib::L2CValue::L2CValue(aLStack280,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_HI);
  lib::L2CValue::L2CValue(aLStack296,0);
  bVar1 = lib::L2CValue::as_bool(aLStack168);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  bVar2 = lib::L2CValue::as_bool(aLStack200);
  bVar3 = lib::L2CValue::as_bool(aLStack216);
  bVar4 = lib::L2CValue::as_bool(aLStack232);
  uVar13 = lib::L2CValue::as_integer(aLStack248);
  uVar7 = lib::L2CValue::as_integer(aLStack264);
  uVar12 = lib::L2CValue::as_integer(aLStack280);
  lib::L2CValue::as_integer(aLStack296);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  return;
}

