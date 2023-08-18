
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ShoulderFall_main_loop(L2CFighterDonkey *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100022520(aLStack80,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar1 & 1U) == 0) {
        pLVar3 = aLStack96;
LAB_710002246c:
        lib::L2CValue::_L2CValue(pLVar3);
      }
      else {
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,HVar5);
        lib::L2CValue::L2CValue(aLStack80,0xde49d2b6f);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0xde49d2b6f);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack128,false);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          fVar7 = (float)lib::L2CValue::as_number(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          bVar2 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          pLVar3 = aLStack80;
          goto LAB_710002246c;
        }
      }
      iVar6 = 0;
      goto LAB_7100022478;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_LANDING);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar6 = 1;
LAB_7100022478:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar6);
  return;
}

