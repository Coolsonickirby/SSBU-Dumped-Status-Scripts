
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackJumpSquat_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  SituationKind SVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *this_00;
  ulong uVar13;
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
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack136,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack168,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack184,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  iVar5 = lib::L2CValue::as_integer(this_00);
  bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar5);
  lib::L2CValue::L2CValue(aLStack200,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar13 = lib::L2CValue::operator__(aLStack200,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack200);
  if ((uVar13 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack120,
               _FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY | _FS_SUCCEEDS_KEEP_ATTACK);
    lib::L2CValue::operator_(aLStack184,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack200,FIGHTER_KINETIC_TYPE_MOTION);
  lib::L2CValue::L2CValue(aLStack216,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack232,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack248,true);
  SVar6 = lib::L2CValue::as_integer(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack200);
  uVar7 = lib::L2CValue::as_integer(aLStack216);
  GVar8 = lib::L2CValue::as_integer(aLStack232);
  bVar1 = lib::L2CValue::as_bool(aLStack248);
  iVar9 = lib::L2CValue::as_integer(aLStack136);
  iVar10 = lib::L2CValue::as_integer(aLStack152);
  iVar11 = lib::L2CValue::as_integer(aLStack168);
  lib::L2CValue::as_integer(aLStack184);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffeb4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,true);
  lib::L2CValue::L2CValue(aLStack200,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,false);
  lib::L2CValue::L2CValue(aLStack264,0);
  lib::L2CValue::L2CValue(aLStack280,FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE);
  lib::L2CValue::L2CValue(aLStack296,0);
  lib::L2CValue::L2CValue(aLStack312,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack200);
  bVar2 = lib::L2CValue::as_bool(aLStack216);
  bVar3 = lib::L2CValue::as_bool(aLStack232);
  bVar4 = lib::L2CValue::as_bool(aLStack248);
  uVar13 = lib::L2CValue::as_integer(aLStack264);
  uVar7 = lib::L2CValue::as_integer(aLStack280);
  uVar12 = lib::L2CValue::as_integer(aLStack296);
  lib::L2CValue::as_integer(aLStack312);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffeb4);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

