
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDollyWave::status::Normal_main_loop(L2CWeaponDollyWave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar4 & 1U) != 0) goto LAB_7100036934;
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DOLLY_WAVE_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack192,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) goto LAB_7100036934;
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar8,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar7 & 1) == 0) {
    iVar5 = app::lua_bind::GroundModule__get_touch_moment_flag_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar5);
    lib::L2CValue::L2CValue(aLStack192,0);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar7 & 1) == 0) {
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::L2CValue(aLStack192,-1.0);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      cVar2 = (char)&stack0xfffffffffffffff0;
      if ((uVar7 & 1) == 0) {
        bVar4 = false;
LAB_71000369f0:
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        uVar7 = lib::L2CValue::operator__(aLStack112,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::operator_(aLStack128,aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack192,0);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack192);
          uVar6 = uVar6 ^ 1;
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        if (bVar4) {
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_DOWN);
          lib::L2CValue::operator_(aLStack128,aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack192,0);
          uVar7 = lib::L2CValue::operator__(aLStack96,aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar7 & 1) != 0) goto LAB_7100036844;
          lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),GROUND_TOUCH_FLAG_DOWN);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
          uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar6);
          lib::L2CValue::L2CValue(aLStack192,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::L2CValue(aLStack96,aLStack192);
          lib::L2CValue::L2CValue(aLStack112,aLStack176);
          pLVar10 = aLStack112;
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar2 + -0x50),SUB81(pLVar10,0));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack112,pLVar8);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),pLVar8);
          lib::L2CAgent::math_atan((L2CAgent *)aLStack112,(L2CValue *)(auStack224 + 0x10),pLVar10);
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack240,fVar11);
          pLVar8 = aLStack240;
          lib::L2CValue::operator_(aLStack96,pLVar8);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar8);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::operator_(aLStack240,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DOLLY_WAVE_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
          fVar11 = (float)lib::L2CValue::as_number(aLStack256);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack96,0xa68069fbe);
          lib::L2CValue::L2CValue(aLStack272,0x1d5e336640);
          uVar7 = lib::L2CValue::as_integer(aLStack96);
          uVar9 = lib::L2CValue::as_integer(aLStack272);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar7,uVar9);
          lib::L2CValue::L2CValue(aLStack256,fVar11);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack96);
          uVar7 = lib::L2CValue::operator__(aLStack256,aLStack240);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::operator_(aLStack256);
            uVar7 = lib::L2CValue::operator__(aLStack240,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar7 & 1) == 0) goto LAB_7100036e30;
            lib::L2CValue::L2CValue(aLStack272,_WEAPON_DOLLY_WAVE_STATUS_KIND_HIT);
            lib::L2CValue::L2CValue(aLStack288,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            bVar4 = false;
          }
          else {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
            uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack272,SITUATION_KIND_AIR);
              lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xf0);
              lib::L2CValue::_L2CValue(aLStack272);
            }
LAB_7100036e30:
            bVar4 = true;
          }
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack160);
          if (!bVar4) goto LAB_7100036dac;
          goto LAB_7100036844;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::operator_(aLStack128,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar7 & 1) != 0) {
          bVar4 = true;
          goto LAB_71000369f0;
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_DOLLY_WAVE_STATUS_KIND_HIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)(cVar2 + -0x50));
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100036dac:
      lib::L2CValue::_L2CValue(aLStack128);
      return;
    }
LAB_7100036844:
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
LAB_71000368b4:
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) goto LAB_7100036924;
      }
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) goto LAB_71000368b4;
LAB_7100036924:
      FUN_7100036260(this);
    }
    lVar1 = -0x70;
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,5);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar6);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack192);
    lVar1 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100036934:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

