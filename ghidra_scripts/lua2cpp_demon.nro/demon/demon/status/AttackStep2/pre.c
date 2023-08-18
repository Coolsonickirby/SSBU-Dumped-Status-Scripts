
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStep2s_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
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
  L2CValue *pLVar13;
  ulong uVar14;
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
  
  lib::L2CValue::L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack184,0);
  this_00 = &this->globalTable;
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2L);
  uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) {
LAB_7100013eb0:
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::operator_(aLStack152,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::operator_(aLStack168,aLStack120);
  }
  else {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
    uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) == 0) {
      pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
      uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      if ((uVar14 & 1) == 0) goto LAB_7100013eb0;
    }
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_CANCEL);
    iVar5 = lib::L2CValue::as_integer(aLStack216);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack200,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack120,false);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar14 & 1) == 0) goto LAB_7100013eb0;
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLAG);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_INT);
    lib::L2CValue::operator_(aLStack152,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLOAT);
    lib::L2CValue::operator_(aLStack168,aLStack120);
  }
  lib::L2CValue::_L2CValue(aLStack120);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2L);
  uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) != 0) {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP);
    uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) == 0) {
      pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
      uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      if ((uVar14 & 1) == 0) {
        pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
        uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
        lib::L2CValue::_L2CValue(aLStack120);
        if ((uVar14 & 1) == 0) goto LAB_71000140a0;
      }
      lib::L2CValue::L2CValue(aLStack216,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_2_TO_2L);
      iVar5 = lib::L2CValue::as_integer(aLStack216);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack200,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack120,true);
      uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack216);
      if ((uVar14 & 1) == 0) goto LAB_71000140a0;
    }
    lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_SLOPE);
    lib::L2CValue::operator_(aLStack184,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::operator_(aLStack184,aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
  }
LAB_71000140a0:
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
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack200,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,false);
  lib::L2CValue::L2CValue(aLStack264,0);
  lib::L2CValue::L2CValue(aLStack280,0);
  lib::L2CValue::L2CValue(aLStack296,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack312,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack200);
  bVar2 = lib::L2CValue::as_bool(aLStack216);
  bVar3 = lib::L2CValue::as_bool(aLStack232);
  bVar4 = lib::L2CValue::as_bool(aLStack248);
  uVar14 = lib::L2CValue::as_integer(aLStack264);
  uVar7 = lib::L2CValue::as_integer(aLStack280);
  uVar12 = lib::L2CValue::as_integer(aLStack296);
  lib::L2CValue::as_integer(aLStack312);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffeb4);
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

