
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialHiEnd_main(L2CFighterLucas *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0xd07d69a9b);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_INT_NEXT_STATUS);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_INT_NEXT_STATUS);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_MOT_CHANGE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100019be0(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100019e20);
  lib::L2CValue::operator_(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialHiEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

