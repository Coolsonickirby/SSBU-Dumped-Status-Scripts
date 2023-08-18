
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackSquatWait_pre(L2CFighterTantan *this,L2CValue *return_value)

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
  Hash40 HVar13;
  ulong uVar14;
  L2CValue *this_00;
  uint in_stack_fffffffffffffea4;
  L2CValue aLStack328 [16];
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
  HVar13 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack200,HVar13);
  lib::L2CValue::L2CValue(aLStack120,0x1199aaf537);
  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,0x16f61e9818);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) == 0) goto LAB_710006b4f8;
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack120,false);
  uVar14 = lib::L2CValue::operator__(aLStack216,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack120,
               FS_SUCCEEDS_KEEP_SLOPE | FS_SUCCEEDS_KEEP_VISIBILITY | _FS_SUCCEEDS_KEEP_HIT);
    lib::L2CValue::operator_(aLStack184,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
  }
LAB_710006b4f8:
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  iVar5 = lib::L2CValue::as_integer(this_00);
  bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar5);
  lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar14 = lib::L2CValue::operator__(aLStack216,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_VISIBILITY);
    lib::L2CValue::operator_(aLStack184,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FS_SUCCEEDS_KEEP_HIT);
    lib::L2CValue::operator_(aLStack248,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FS_SUCCEEDS_KEEP_ATTACK);
    lib::L2CValue::operator_(aLStack232,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::operator_(aLStack184,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack248);
  }
  lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack216,FIGHTER_KINETIC_TYPE_MOTION);
  lib::L2CValue::L2CValue(aLStack232,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack248,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack264,true);
  SVar6 = lib::L2CValue::as_integer(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack216);
  uVar7 = lib::L2CValue::as_integer(aLStack232);
  GVar8 = lib::L2CValue::as_integer(aLStack248);
  bVar1 = lib::L2CValue::as_bool(aLStack264);
  iVar9 = lib::L2CValue::as_integer(aLStack136);
  iVar10 = lib::L2CValue::as_integer(aLStack152);
  iVar11 = lib::L2CValue::as_integer(aLStack168);
  lib::L2CValue::as_integer(aLStack184);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffea4);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,false);
  lib::L2CValue::L2CValue(aLStack264,false);
  lib::L2CValue::L2CValue(aLStack280,0);
  lib::L2CValue::L2CValue
            (aLStack296,
             _FIGHTER_STATUS_ATTR_ENABLE_ROCKETBELT_EJECT | _FIGHTER_STATUS_ATTR_INHERIT_CURSOR |
             FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE |
             _FIGHTER_STATUS_ATTR_DISABLE_JUMP_BOARD_EFFECT);
  lib::L2CValue::L2CValue(aLStack312,0);
  lib::L2CValue::L2CValue(aLStack328,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack216);
  bVar2 = lib::L2CValue::as_bool(aLStack232);
  bVar3 = lib::L2CValue::as_bool(aLStack248);
  bVar4 = lib::L2CValue::as_bool(aLStack264);
  uVar14 = lib::L2CValue::as_integer(aLStack280);
  uVar7 = lib::L2CValue::as_integer(aLStack296);
  uVar12 = lib::L2CValue::as_integer(aLStack312);
  lib::L2CValue::as_integer(aLStack328);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffea4);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

