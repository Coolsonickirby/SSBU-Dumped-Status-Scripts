
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPopo::status::SpecialSPartner_exit(L2CFighterPopo *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  LinkAttribute LVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  void *pvVar9;
  KineticEnergy *pKVar10;
  FighterKineticEnergyGravity *pFVar11;
  float fVar12;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack96,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    LVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar3,LVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::FighterSpecializer_Popo::detach_constraint_special_s(pBVar8);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_STATUS_KIND_SPECIAL_S_PARTNER);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_STATUS_KIND_FINAL_PARTNER);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_PARTNER);
            uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              app::LinkEvent::new_l2c_table();
              pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x105a79305b);
              lib::L2CValue::L2CValue(aLStack80,0x27e26e220b);
              lib::L2CValue::operator_(pLVar7,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_LINK_NO_PARTNER);
              FUN_7100007380(aLStack80,this,aLStack112,aLStack96);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
            }
          }
        }
      }
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_S_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                      (FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_FAILURE_INT,uVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar9 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack80,(L2CValue *)&FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_UP_Z);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,pvVar9);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,pvVar9);
      lib::L2CValue::_L2CValue(aLStack112);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
      fVar12 = (float)app::lua_bind::KineticEnergy__get_speed_y_impl(pKVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar12);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,pvVar9);
      lib::L2CValue::_L2CValue(aLStack144);
      fVar12 = (float)lib::L2CValue::as_number(aLStack112);
      pFVar11 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar11,fVar12);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

