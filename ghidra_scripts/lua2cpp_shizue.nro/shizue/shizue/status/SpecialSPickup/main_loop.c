
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSPickup_main_loop(L2CFighterShizue *this,L2CValue *return_value)

{
  undefined8 *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ItemCommonParamInt IVar5;
  ulong uVar6;
  void *pvVar7;
  Item *pIVar8;
  L2CValue *pLVar9;
  code *pcVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_7100022c00;
    }
    iVar3 = 1;
    goto LAB_7100023030;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100022c00:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_PICKUP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_ID)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar7 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                               (FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLAG,uVar4);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar7);
    }
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pIVar8 = (Item *)lib::L2CValue::as_pointer(aLStack112);
      app::sv_item::end_hooked(pIVar8);
      this_00 = &this[1].field_0x20;
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb0a444a09);
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_ITEM_COMMON_PARAM_INT_MURABITO_GEN);
      IVar5 = lib::L2CValue::as_integer(aLStack80);
      pIVar8 = (Item *)lib::L2CValue::as_pointer(aLStack112);
      iVar3 = app::lua_bind::Item__common_param_int_impl(pIVar8,IVar5);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(pLVar9,aLStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar9);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack176,aLStack112);
        FUN_7100023180(aLStack160,this,aLStack176);
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(pLVar9,aLStack144);
        lib::L2CValue::L2CValue(aLStack176,aLStack112);
        pcVar10 = (code *)lib::L2CValue::as_pointer(pLVar9);
        lib::L2CValue::L2CValue(aLStack80,aLStack176);
        (*pcVar10)(this,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    FUN_71000233d0(this);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_PICKUP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x20,0x12c4135857);
    lib::L2CValue::L2CValue(aLStack96,pLVar9);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x20,0xfc059e3a7);
    lib::L2CValue::L2CValue(aLStack112,pLVar9);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    FUN_710001c520(aLStack80,this,aLStack96,aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar9 = aLStack96;
LAB_7100023024:
    lib::L2CValue::_L2CValue(pLVar9);
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100023018:
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar9 = aLStack80;
      goto LAB_7100023024;
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_7100023018;
    }
  }
  iVar3 = 0;
LAB_7100023030:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

