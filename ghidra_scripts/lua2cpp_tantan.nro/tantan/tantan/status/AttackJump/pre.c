
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackJump_pre(L2CFighterTantan *this,L2CValue *return_value)

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
  L2CValue *pLVar13;
  ulong uVar14;
  long lVar15;
  Hash40 HVar16;
  uint in_stack_fffffffffffffe54;
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
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
  
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLAG);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_INT);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLOAT);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_KINETIC_TYPE_JUMP);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  iVar5 = lib::L2CValue::as_integer(pLVar13);
  bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar5);
  lib::L2CValue::L2CValue(aLStack200,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack392,true);
  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack392);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::_L2CValue(aLStack200);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack200,false);
    lib::L2CValue::L2CValue(aLStack392,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
    iVar5 = lib::L2CValue::as_integer(aLStack392);
    lVar15 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack216,lVar15);
    lib::L2CValue::_L2CValue(aLStack392);
    lib::L2CValue::L2CValue(aLStack392,0x7fb997a80);
    uVar14 = lib::L2CValue::operator__(aLStack216,aLStack392);
    lib::L2CValue::_L2CValue(aLStack392);
    if ((uVar14 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack248,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHORT_L);
      iVar5 = lib::L2CValue::as_integer(aLStack248);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack232,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack392,false);
      uVar14 = lib::L2CValue::operator__(aLStack232,aLStack392);
      lib::L2CValue::_L2CValue(aLStack392);
      if ((uVar14 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack280,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
        iVar5 = lib::L2CValue::as_integer(aLStack280);
        HVar16 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack264,HVar16);
        uVar14 = lib::L2CValue::operator__(aLStack264,aLStack216);
        if ((uVar14 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack312,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI)
          ;
          iVar5 = lib::L2CValue::as_integer(aLStack312);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack296,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack392,true);
          uVar14 = lib::L2CValue::operator__(aLStack296,aLStack392);
          lib::L2CValue::_L2CValue(aLStack392);
          lib::L2CValue::_L2CValue(aLStack296);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack264);
          lib::L2CValue::_L2CValue(aLStack280);
          lib::L2CValue::_L2CValue(aLStack232);
          lib::L2CValue::_L2CValue(aLStack248);
          if ((uVar14 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack392,true);
            lib::L2CValue::operator_(aLStack200,aLStack392);
            pLVar13 = aLStack392;
            goto LAB_7100068774;
          }
          goto LAB_7100068778;
        }
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::_L2CValue(aLStack280);
      }
      lib::L2CValue::_L2CValue(aLStack232);
      pLVar13 = aLStack248;
LAB_7100068774:
      lib::L2CValue::_L2CValue(pLVar13);
    }
    else {
      lib::L2CValue::L2CValue(aLStack248,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHORT_R);
      iVar5 = lib::L2CValue::as_integer(aLStack248);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack232,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack392,false);
      uVar14 = lib::L2CValue::operator__(aLStack232,aLStack392);
      lib::L2CValue::_L2CValue(aLStack392);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack248);
      if ((uVar14 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack392,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
        iVar5 = lib::L2CValue::as_integer(aLStack392);
        lVar15 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack232,lVar15);
        lib::L2CValue::_L2CValue(aLStack392);
        lib::L2CValue::L2CValue(aLStack248,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
        iVar5 = lib::L2CValue::as_integer(aLStack248);
        HVar16 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack392,HVar16);
        uVar14 = lib::L2CValue::operator__(aLStack392,aLStack232);
        lib::L2CValue::_L2CValue(aLStack392);
        lib::L2CValue::_L2CValue(aLStack248);
        if ((uVar14 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack264,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
          iVar5 = lib::L2CValue::as_integer(aLStack264);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack392,true);
          uVar14 = lib::L2CValue::operator__(aLStack248,aLStack392);
          lib::L2CValue::_L2CValue(aLStack392);
          lib::L2CValue::_L2CValue(aLStack248);
          lib::L2CValue::_L2CValue(aLStack264);
          if ((uVar14 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack392,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
            iVar5 = lib::L2CValue::as_integer(aLStack392);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack392,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
            iVar5 = lib::L2CValue::as_integer(aLStack392);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack392);
            lib::L2CValue::L2CValue(aLStack392,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
            iVar5 = lib::L2CValue::as_integer(aLStack392);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack392);
            lib::L2CValue::L2CValue(aLStack392,true);
            lib::L2CValue::operator_(aLStack200,aLStack392);
          }
          lib::L2CValue::_L2CValue(aLStack392);
        }
        pLVar13 = aLStack232;
        goto LAB_7100068774;
      }
    }
LAB_7100068778:
    lib::L2CValue::L2CValue(aLStack392,true);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack392);
    lib::L2CValue::_L2CValue(aLStack392);
    iVar5 = _FIGHTER_STATUS_KIND_ATTACK_AIR;
    if ((uVar14 & 1) != 0) {
      pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
      lib::L2CValue::L2CValue(aLStack392,iVar5);
      lib::L2CValue::operator_(pLVar13,aLStack392);
      lib::L2CValue::_L2CValue(aLStack392);
      lib::L2CValue::L2CValue(aLStack392,_FIGHTER_STATUS_KIND_NONE);
      FUN_7100028a60(this,aLStack392);
      lib::L2CValue::_L2CValue(aLStack392);
      lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_KIND_ATTACK_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack232);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack200);
      goto LAB_7100068c18;
    }
    lib::L2CValue::L2CValue
              (aLStack392,
               _FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY | _FS_SUCCEEDS_KEEP_ATTACK);
    lib::L2CValue::operator_(aLStack168,aLStack392);
    lib::L2CValue::_L2CValue(aLStack392);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
  }
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar5 = lib::L2CValue::as_integer(aLStack216);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack200,iVar5);
  lib::L2CValue::L2CValue(aLStack392,_FIGHTER_STATUS_KIND_JUMP);
  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack392);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar14 & 1) == 0) {
    iVar5 = app::lua_bind::KineticModule__get_kinetic_type_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack392,iVar5);
    uVar14 = lib::L2CValue::operator__(aLStack392,aLStack184);
    lib::L2CValue::_L2CValue(aLStack392);
    if ((uVar14 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack392,_FIGHTER_KINETIC_TYPE_UNIQ);
      lib::L2CValue::operator_(aLStack184,aLStack392);
      pLVar13 = aLStack392;
      goto LAB_71000689d0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack200,aLStack168);
    FUN_7100070c20(aLStack392,aLStack200);
    lib::L2CValue::operator_(aLStack120,aLStack392);
    lib::L2CValue::operator_(aLStack136,aLStack376);
    lib::L2CValue::operator_(aLStack152,aLStack360);
    lib::L2CValue::operator_(aLStack184,aLStack344);
    lib::L2CValue::operator_(aLStack168,aLStack328);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack392);
    pLVar13 = aLStack200;
LAB_71000689d0:
    lib::L2CValue::_L2CValue(pLVar13);
  }
  lib::L2CValue::L2CValue(aLStack392,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack216,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack232,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack248,true);
  SVar6 = lib::L2CValue::as_integer(aLStack392);
  iVar5 = lib::L2CValue::as_integer(aLStack184);
  uVar7 = lib::L2CValue::as_integer(aLStack216);
  GVar8 = lib::L2CValue::as_integer(aLStack232);
  bVar1 = lib::L2CValue::as_bool(aLStack248);
  iVar9 = lib::L2CValue::as_integer(aLStack120);
  iVar10 = lib::L2CValue::as_integer(aLStack136);
  iVar11 = lib::L2CValue::as_integer(aLStack152);
  lib::L2CValue::as_integer(aLStack168);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffe54);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::L2CValue(aLStack392,false);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,false);
  lib::L2CValue::L2CValue(aLStack264,true);
  lib::L2CValue::L2CValue(aLStack280,0);
  lib::L2CValue::L2CValue(aLStack296,FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE);
  lib::L2CValue::L2CValue(aLStack312,0);
  lib::L2CValue::L2CValue(aLStack408,0);
  bVar1 = lib::L2CValue::as_bool(aLStack392);
  iVar5 = lib::L2CValue::as_integer(aLStack216);
  bVar2 = lib::L2CValue::as_bool(aLStack232);
  bVar3 = lib::L2CValue::as_bool(aLStack248);
  bVar4 = lib::L2CValue::as_bool(aLStack264);
  uVar14 = lib::L2CValue::as_integer(aLStack280);
  uVar7 = lib::L2CValue::as_integer(aLStack296);
  uVar12 = lib::L2CValue::as_integer(aLStack312);
  lib::L2CValue::as_integer(aLStack408);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffe54);
  lib::L2CValue::_L2CValue(aLStack408);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100068c18:
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  return;
}

