
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWarioWariobike::status::SpecialSEscape_main_loop
          (L2CWeaponWarioWariobike *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      FUN_71000226d0(this);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_RIGHT);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_LR);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_7100022a88;
    }
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_INT_START_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar6 = lib::L2CValue::operator_(aLStack80,aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_7100022a98;
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_BUMP);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100022bf4:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack80;
  }
  else {
LAB_7100022a88:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100022a98:
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_LR);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_INT_START_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack160,iVar4);
        lib::L2CValue::L2CValue(aLStack80,1);
        uVar6 = lib::L2CValue::operator_(aLStack80,aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_7100022c24;
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_BUMP);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_7100022bf4;
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100022c24:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

