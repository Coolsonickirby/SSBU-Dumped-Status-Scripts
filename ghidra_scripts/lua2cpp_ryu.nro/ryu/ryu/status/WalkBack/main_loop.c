
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::WalkBack_main_loop(L2CFighterRyu *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_KIND_WALK_BRAKE_BACK);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::operator_(aLStack144);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,&DAT_7100029410);
  lua2cpp::L2CFighterCommon::status_Walk_Main_common
            (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack208,0xa1de21ba9);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack208);
      pLVar4 = aLStack192;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
      iVar2 = lib::L2CValue::as_integer(aLStack240);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) == 0) goto LAB_7100029220;
      fVar7 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack208,fVar7);
      lib::L2CValue::operator_(aLStack208);
      lib::L2CValue::operator_(aLStack80,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack208,0xc60e57049);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      uVar5 = lib::L2CValue::operator_(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) != 0) {
        uVar3 = app::lua_bind::ControlModule__get_flick_x_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,uVar3 & 0xff);
        lib::L2CValue::L2CValue(aLStack208,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack224,0xcba8643d6);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack192,iVar2);
        uVar5 = lib::L2CValue::operator_(aLStack80,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1
                    );
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack192,fVar7);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar5 = lib::L2CValue::operator__(aLStack192,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack80,fVar7);
            uVar5 = lib::L2CValue::operator__(aLStack192,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_DASH_BACK);
              lib::L2CValue::L2CValue(aLStack208,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack144);
              return;
            }
          }
          lib::L2CValue::_L2CValue(aLStack192);
        }
      }
      pLVar4 = aLStack144;
    }
    lib::L2CValue::_L2CValue(pLVar4);
  }
LAB_7100029220:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

