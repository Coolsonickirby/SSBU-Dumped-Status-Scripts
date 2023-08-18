
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootFall_pre(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  SituationKind SVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  Hash40 HVar14;
  ulong uVar15;
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
  
  HVar14 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack136,HVar14);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar6 = lib::L2CValue::as_integer(aLStack120);
  HVar14 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack152,HVar14);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,0x1454acacb0);
  uVar15 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar15 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,0x1a793b0b2f);
    uVar15 = lib::L2CValue::operator__(aLStack152,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar15 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack168,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
      iVar6 = lib::L2CValue::as_integer(aLStack168);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack168);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
        lib::L2CValue::L2CValue(aLStack168,_FIGHTER_KINETIC_TYPE_UNIQ);
        lib::L2CValue::L2CValue(aLStack184,GROUND_CORRECT_KIND_AIR);
        lib::L2CValue::L2CValue(aLStack200,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
        lib::L2CValue::L2CValue(aLStack216,true);
        lib::L2CValue::L2CValue
                  (aLStack232,_FIGHTER_BUDDY_STATUS_WORK_KEEP_FLAG_SPECIAL_N_SHOOT_FALL_FLAG);
        lib::L2CValue::L2CValue
                  (aLStack248,_FIGHTER_BUDDY_STATUS_WORK_KEEP_FLAG_SPECIAL_N_SHOOT_FALL_INT);
        lib::L2CValue::L2CValue
                  (aLStack264,_FIGHTER_BUDDY_STATUS_WORK_KEEP_FLAG_SPECIAL_N_SHOOT_FALL_FLOAT);
        lib::L2CValue::L2CValue(aLStack280,FS_SUCCEEDS_KEEP_SLOPE | FS_SUCCEEDS_KEEP_VISIBILITY);
        SVar7 = lib::L2CValue::as_integer(aLStack120);
        iVar6 = lib::L2CValue::as_integer(aLStack168);
        uVar8 = lib::L2CValue::as_integer(aLStack184);
        GVar9 = lib::L2CValue::as_integer(aLStack200);
        bVar1 = lib::L2CValue::as_bool(aLStack216);
        iVar10 = lib::L2CValue::as_integer(aLStack232);
        iVar11 = lib::L2CValue::as_integer(aLStack248);
        iVar12 = lib::L2CValue::as_integer(aLStack264);
        lib::L2CValue::as_integer(aLStack280);
        app::lua_bind::StatusModule__init_settings_impl
                  (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar1 & 1),iVar10,iVar11,
                   iVar12,in_stack_fffffffffffffed4);
        lib::L2CValue::_L2CValue(aLStack280);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::_L2CValue(aLStack248);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack200);
        lib::L2CValue::_L2CValue(aLStack184);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack120);
        lib::L2CValue::L2CValue(aLStack120,false);
        lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TREADED_KIND_NO_REAC);
        lib::L2CValue::L2CValue(aLStack184,false);
        lib::L2CValue::L2CValue(aLStack200,false);
        lib::L2CValue::L2CValue(aLStack216,true);
        lib::L2CValue::L2CValue
                  (aLStack232,
                   _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N |
                   FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
        lib::L2CValue::L2CValue(aLStack248,0);
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
        lib::L2CValue::L2CValue(aLStack280,0);
        bVar1 = lib::L2CValue::as_bool(aLStack120);
        iVar6 = lib::L2CValue::as_integer(aLStack168);
        bVar3 = lib::L2CValue::as_bool(aLStack184);
        bVar4 = lib::L2CValue::as_bool(aLStack200);
        bVar5 = lib::L2CValue::as_bool(aLStack216);
        uVar15 = lib::L2CValue::as_integer(aLStack232);
        uVar8 = lib::L2CValue::as_integer(aLStack248);
        uVar13 = lib::L2CValue::as_integer(aLStack264);
        lib::L2CValue::as_integer(aLStack280);
        app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
                   (bool)(bVar5 & 1),uVar15,uVar8,uVar13,in_stack_fffffffffffffed4);
        lib::L2CValue::_L2CValue(aLStack280);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::_L2CValue(aLStack248);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack200);
        lib::L2CValue::_L2CValue(aLStack184);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack120);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710000ed44;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar6 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
  iVar6 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_VIA_FALL);
  iVar6 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
  iVar6 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710000ed44:
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

