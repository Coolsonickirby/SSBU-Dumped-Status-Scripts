
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterWario::status::Wait_pre(L2CFighterWario *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_Wait(this);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_AGAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_71000168e4:
      iVar3 = 0;
      goto LAB_71000168ec;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_AGAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar3 = _FIGHTER_WARIO_STATUS_KIND_SPECIAL_N_END;
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar3 = _FIGHTER_WARIO_STATUS_KIND_SPECIAL_N_LARGE;
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      iVar3 = _FIGHTER_WARIO_STATUS_KIND_SPECIAL_N_EAT;
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        iVar3 = _FIGHTER_WARIO_STATUS_KIND_SPECIAL_N_ITEM;
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          iVar3 = _FIGHTER_WARIO_STATUS_KIND_SPECIAL_N_BOMB;
          if ((uVar4 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
            uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) goto LAB_71000168e4;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar3 = 1;
LAB_71000168ec:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

