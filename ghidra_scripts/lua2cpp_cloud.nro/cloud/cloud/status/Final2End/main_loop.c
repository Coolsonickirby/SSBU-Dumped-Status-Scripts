
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::Final2End_main_loop(L2CFighterCloud *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100013d84:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    this_00 = &this->globalTable;
    if ((bVar3 & 1U) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
LAB_7100013e98:
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
          if ((uVar5 & 1) != 0) goto LAB_7100013f08;
        }
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) goto LAB_7100013e98;
LAB_7100013f08:
        FUN_7100013ba0(this);
      }
      FUN_71000143e0(this);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_SPEED);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100014214;
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,
                 _FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_OFFSET_Y);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_SPEED);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar5 = lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_SPEED);
        fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar4);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_OFFSET_Y);
        fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar4);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,
                 _FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_OFFSET_Y);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      uVar5 = lib::L2CValue::as_number(aLStack144);
      lVar9 = lib::L2CValue::as_number(aLStack112);
      uVar8 = lib::L2CValue::as_number(aLStack160);
      local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
      uStack72 = (ulong)uVar8;
      app::lua_bind::LinkModule__set_constraint_translate_offset_impl
                (this->moduleAccessor,(Vector3f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar6 = aLStack112;
      goto LAB_71000141d0;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lVar9 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_7100014214;
      goto LAB_7100013d84;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack128;
LAB_71000141d0:
    lib::L2CValue::_L2CValue(pLVar6);
    lVar9 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
LAB_7100014214:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

