
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialNHold_end(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_N_SHOOT);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_N_CANCEL);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        FUN_710000b590(aLStack96,this);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_N_S);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_N_M);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack128,0xc245caa4e);
            uVar4 = lib::L2CValue::as_integer(aLStack112);
            uVar5 = lib::L2CValue::as_integer(aLStack128);
            iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
            lib::L2CValue::L2CValue(aLStack80,iVar1);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
            iVar1 = lib::L2CValue::as_integer(aLStack80);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack128,0xc535b9ad8);
            uVar4 = lib::L2CValue::as_integer(aLStack112);
            uVar5 = lib::L2CValue::as_integer(aLStack128);
            iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
            lib::L2CValue::L2CValue(aLStack80,iVar1);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
            iVar1 = lib::L2CValue::as_integer(aLStack80);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0);
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
          iVar1 = lib::L2CValue::as_integer(aLStack80);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

