
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterElight::status::Wait_main(L2CFighterElight *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_wait_common(this);
  lua2cpp::L2CFighterCommon::sub_is_through_wait_motion_mtrans(this);
  lib::L2CValue::L2CValue(aLStack144,true);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) goto LAB_7100016fa8;
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::sub_wait_item_motion_mtrans(this);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,false);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x47dee83e5);
    uVar2 = lib::L2CValue::operator__(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar2 & 1) != 0) goto LAB_7100016d48;
    lib::L2CValue::L2CValue(aLStack144,0x7fb997a80);
    uVar2 = lib::L2CValue::operator__(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar4 = lib::L2CValue::as_hash(aLStack112);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
      goto LAB_7100016f80;
    }
  }
  else {
LAB_7100016d48:
    this_00 = &this->globalTable;
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_STATUS_KIND_SPECIAL_LW_OUT);
    uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_STATUS_KIND_SPECIAL_N_END);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) != 0) goto LAB_7100016eec;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_STATUS_KIND_SPECIAL_S_END);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) != 0) goto LAB_7100016eec;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_ENTRY);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) != 0) goto LAB_7100016eec;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_APPEAL);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) != 0) goto LAB_7100016eec;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_KIND_FINAL);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) != 0) goto LAB_7100016eec;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_STATUS_KIND_FINAL_END);
      uVar2 = lib::L2CValue::operator__(pLVar3,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) != 0) goto LAB_7100016eec;
      lib::L2CValue::L2CValue(aLStack144,0x60af60f0c);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar4 = lib::L2CValue::as_hash(aLStack144);
      fVar5 = (float)lib::L2CValue::as_number(aLStack160);
      fVar6 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
LAB_7100016eec:
      lib::L2CValue::L2CValue(aLStack144,0x47dee83e5);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar4 = lib::L2CValue::as_hash(aLStack144);
      fVar5 = (float)lib::L2CValue::as_number(aLStack160);
      fVar6 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack192);
LAB_7100016f80:
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100016fa8:
  lib::L2CValue::L2CValue(aLStack144,Wait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

