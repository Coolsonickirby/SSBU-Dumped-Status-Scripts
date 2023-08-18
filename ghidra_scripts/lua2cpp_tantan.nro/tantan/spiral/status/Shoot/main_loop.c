
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::Shoot_main_loop(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
  uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH2);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH3);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) goto LAB_71000981f4;
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LONG);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xcb4cf0e97);
        lib::L2CValue::L2CValue(aLStack112,0x11773ab5fa);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator_(aLStack64,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xcb4cf0e97);
        lib::L2CValue::L2CValue(aLStack112,0x16ebec34b9);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator_(aLStack64,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      uVar4 = lib::L2CValue::operator__(aLStack64,pLVar6);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LONG);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack128,0xb795b23dd);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::operator_(aLStack80,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack128,0x100c9bc287);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::operator_(aLStack80,aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,aLStack80);
        FUN_71000961b0(this,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH3);
      FUN_71000983d0(this,aLStack80);
      pLVar6 = aLStack80;
LAB_71000981bc:
      lib::L2CValue::_L2CValue(pLVar6);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH2);
      FUN_71000983d0(this,aLStack64);
    }
    pLVar6 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LONG);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::LinkModule__is_parent_hit_stop_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack96,0xff30faae3);
          uVar4 = lib::L2CValue::as_integer(aLStack80);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack64,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack96,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_START_COUNTER);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          uVar4 = lib::L2CValue::operator__(aLStack64,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_DRAGON_BEAM);
            lib::L2CValue::L2CValue(aLStack128,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
            lib::L2CValue::_L2CValue(aLStack128);
            pLVar6 = aLStack112;
            goto LAB_71000981bc;
          }
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
    FUN_71000983d0(this,aLStack144);
    pLVar6 = aLStack144;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_71000981f4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

