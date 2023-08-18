
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::Shoot_exec(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_SHOOT_COUNTER);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_KIND);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    lVar1 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LONG);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) == 0) goto LAB_71000917a0;
    lib::L2CValue::L2CValue(aLStack64,0xcb4cf0e97);
    lib::L2CValue::L2CValue(aLStack96,0xbc0ad263c);
    uVar6 = lib::L2CValue::as_integer(aLStack64);
    uVar7 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LONG);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack144,0xb795b23dd);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue(aLStack176,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack192,0x1000346547);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::operator_(aLStack112,aLStack160);
      lib::L2CValue::operator_(aLStack96,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack144,0x100c9bc287);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue(aLStack176,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack192,0x15dfb38f83);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::operator_(aLStack112,aLStack160);
      lib::L2CValue::operator_(aLStack96,aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_SHOOT_COUNTER);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,iVar4);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack144,0xff30faae3);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_START_COUNTER);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack64,iVar4);
      uVar6 = lib::L2CValue::operator_(aLStack64,aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,false);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LEFT);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack160,CONTROL_PAD_BUTTON_SPECIAL);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,true);
            lib::L2CValue::operator_(aLStack144,aLStack64);
            goto LAB_71000916ec;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,true);
            lib::L2CValue::operator_(aLStack144,aLStack64);
LAB_71000916ec:
            lib::L2CValue::_L2CValue(aLStack64);
          }
        }
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0);
          lib::L2CValue::L2CValue
                    (aLStack160,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_START_COUNTER);
          iVar4 = lib::L2CValue::as_integer(aLStack64);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack64,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_START_COUNTER);
          iVar4 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
        }
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lVar1 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_71000917a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

