
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::Wait_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  L2CAgent *this_01;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_Wait_check_interrupt(this);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    return;
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_WAIT);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::FighterSpecializer_Demon::update_opponent_lr_1on1(pBVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar3 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    uVar3 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack160,pLVar4);
      FUN_71000108a0(aLStack96,aLStack160);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar3 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_DOLLY);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_DEMON);
          uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100047ce8;
        }
        else {
LAB_7100047ce8:
          lib::L2CValue::L2CValue(aLStack112,0.86);
          fVar6 = (float)lib::L2CValue::as_number(aLStack112);
          bVar1 = app::lua_bind::GroundModule__is_ottotto_impl(this->moduleAccessor,fVar6);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) {
LAB_7100047e14:
            lib::L2CValue::L2CValue(aLStack176,false);
          }
          else {
            pLVar4 = (L2CValue *)0x1a;
            this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
            lib::L2CAgent::math_abs(this_01,pLVar4);
            lib::L2CValue::L2CValue(aLStack80,0.75);
            uVar3 = lib::L2CValue::operator_(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar3 & 1) == 0) goto LAB_7100047e14;
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_OTTOTTO);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar3 & 1) == 0) goto LAB_7100047e14;
            lib::L2CValue::L2CValue(aLStack176,true);
          }
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar3 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar3 & 1) == 0) goto LAB_7100047e8c;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_TURN_AUTO);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100047e98;
      }
    }
  }
LAB_7100047e8c:
  lua2cpp::L2CFighterCommon::status_pre_Wait_main(this);
LAB_7100047e98:
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

