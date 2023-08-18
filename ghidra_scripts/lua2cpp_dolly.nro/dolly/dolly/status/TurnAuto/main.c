
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDolly::status::TurnAuto_main(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_wait_common(this);
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_DOLLY);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_DEMON);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) goto LAB_710000a4bc;
  }
  bVar1 = app::lua_bind::ControlModule__is_remake_command_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_fighter_remake_control_command(this);
  }
LAB_710000a4bc:
  lib::L2CValue::L2CValue(aLStack96,0x420201547);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,TurnAuto_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

