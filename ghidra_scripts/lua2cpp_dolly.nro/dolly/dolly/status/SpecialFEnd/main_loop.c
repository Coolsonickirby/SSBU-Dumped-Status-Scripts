
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SpecialFEnd_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack256 [16];
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710001be20:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
LAB_710001c01c:
        lVar2 = -0x50;
LAB_710001c100:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
      }
      else {
        this_00 = &this->globalTable;
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) goto LAB_710001bfe4;
          lib::L2CValue::_L2CValue(aLStack96);
LAB_710001c064:
          lib::L2CValue::L2CValue(aLStack80,false);
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::L2CValue(aLStack144,&DAT_710001ad80);
          lib::L2CValue::L2CValue(aLStack160,&DAT_710001aee0);
          lib::L2CValue::L2CValue(aLStack176,true);
          FUN_710001b620(this,aLStack80,aLStack96,aLStack112,aLStack144,aLStack160,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lVar2 = -0x40;
          goto LAB_710001c100;
        }
LAB_710001bfe4:
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) goto LAB_710001c01c;
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) goto LAB_710001c064;
      }
      lib::L2CValue::L2CValue(aLStack192,false);
      lib::L2CValue::L2CValue(aLStack208,0);
      lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack256,0x1a6d1cb60b);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      FUN_710001a3e0(this,aLStack192,aLStack208,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      pLVar5 = aLStack192;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack80;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_710001c1ac;
      goto LAB_710001be20;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar5 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_710001c1ac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

