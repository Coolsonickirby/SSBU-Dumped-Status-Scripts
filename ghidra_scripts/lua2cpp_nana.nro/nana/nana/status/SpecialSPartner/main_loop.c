
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialSPartner_main_loop(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  LinkAttribute LVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_LINK_NO_PARTNER);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar4 = app::lua_bind::LinkModule__get_parent_situation_kind_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack192,aLStack96);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) goto LAB_710001b57c;
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_PARTNER_FLAG_MOTION_GROUND);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_PARTNER_FLAG_MOTION_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_S_PARTNER_FLAG_MOTION_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,HVar7);
      lib::L2CValue::L2CValue(aLStack96,0xf38368121);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,0x1333af0cf5);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      fVar12 = (float)lib::L2CValue::as_number(aLStack176);
      bVar3 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),fVar12,(bool)(bVar3 & 1)
                 ,false);
      goto LAB_710001b3f8;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_S_PARTNER_FLAG_MOTION_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0x1333af0cf5);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,0xf38368121);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar12 = (float)lib::L2CValue::as_number(aLStack176);
    bVar3 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),fVar12,(bool)(bVar3 & 1),
               false);
LAB_710001b3f8:
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_LINK_NO_PARTNER);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
      lib::L2CValue::L2CValue(aLStack112,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      LVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar4,LVar5,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    app::FighterSpecializer_Popo::detach_constraint_special_s(pBVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    app::FighterSpecializer_Popo::change_status_special_s_partner(pBVar9);
  }
LAB_710001b57c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

