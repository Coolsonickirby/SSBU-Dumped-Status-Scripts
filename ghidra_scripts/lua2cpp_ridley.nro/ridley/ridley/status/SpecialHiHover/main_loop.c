
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialHiHover_main_loop(L2CFighterRidley *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CAgent *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)0x1a;
    pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(pLVar5,pLVar7);
    pLVar7 = (L2CValue *)0x1b;
    pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CAgent::math_abs(pLVar5,pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack64,pLVar7);
    lib::L2CValue::_L2CValue(aLStack64);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = lib::L2CValue::operator_(aLStack96,aLStack80), (uVar6 & 1) == 0)) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar6 = lib::L2CValue::operator_(pLVar7,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if (((uVar6 & 1) == 0) ||
         (uVar6 = lib::L2CValue::operator_(aLStack96,aLStack80), (uVar6 & 1) == 0)) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
        lib::L2CValue::L2CValue(aLStack64,0.0);
        uVar6 = lib::L2CValue::operator_(aLStack64,pLVar7);
        lib::L2CValue::_L2CValue(aLStack64);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = lib::L2CValue::operator_(aLStack80,aLStack96), (uVar6 & 1) == 0)) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
          lib::L2CValue::L2CValue(aLStack64,0.0);
          uVar6 = lib::L2CValue::operator_(pLVar7,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if (((uVar6 & 1) == 0) ||
             (uVar6 = lib::L2CValue::operator_(aLStack80,aLStack96), (uVar6 & 1) == 0)) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_HI);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_LW);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_HI);
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        }
      }
      else {
        fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar8);
        lib::L2CValue::L2CValue(aLStack64,1.0);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_F);
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_B);
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        }
      }
    }
    else {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_B);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_F);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_START);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

