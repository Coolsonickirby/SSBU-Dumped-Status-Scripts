
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::Attack_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lua2cpp::L2CFighterCommon::sub_status_AttackCommon(this);
  lib::L2CValue::L2CValue(aLStack112,0x11aa00608a);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lua2cpp::L2CFighterCommon::check_attack_mtrans(this);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x13);
  lib::L2CValue::L2CValue(aLStack80,&LAB_7100011a00);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMBO_TYPE_NONE);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_COMBO_TYPE_HIT);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMBO_TYPE_SUCCEED);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710000fd1c;
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterCommon::attack_combo_uniq_chk(this,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
      lib::L2CValue::L2CValue(aLStack80,&DAT_7100012180);
      lib::L2CValue::operator_(pLVar5,aLStack80);
    }
    else {
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,false);
        FUN_7100011a70(aLStack128,this,aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
      lib::L2CValue::L2CValue(aLStack80,&DAT_7100012120);
      lib::L2CValue::operator_(pLVar5,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar5 = aLStack144;
LAB_710000fc74:
      lib::L2CValue::_L2CValue(pLVar5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_ATTACK_FLAG_ENABLE_RESTART);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTACK_FLAG_RESTART);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        pLVar5 = aLStack80;
        goto LAB_710000fc74;
      }
    }
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterCommon::attack_combo_none_uniq_chk(this,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
    lib::L2CValue::L2CValue(aLStack80,&DAT_7100011a10);
    lib::L2CValue::operator_(pLVar5,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000fd1c:
  lib::L2CValue::L2CValue(aLStack80,Attack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

