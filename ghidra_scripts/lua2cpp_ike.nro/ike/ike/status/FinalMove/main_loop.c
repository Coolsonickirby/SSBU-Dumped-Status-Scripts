
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterIke::status::FinalMove_main_loop(L2CFighterIke *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100014afc:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_FINAL_FLAG_CHANGE_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_7100014bcc;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100014bcc;
      goto LAB_7100014afc;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack112;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100014bcc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

