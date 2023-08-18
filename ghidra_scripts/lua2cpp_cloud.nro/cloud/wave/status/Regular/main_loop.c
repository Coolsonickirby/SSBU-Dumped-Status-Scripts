
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponCloudWave::status::Regular_main_loop(L2CWeaponCloudWave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack304 [16];
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0);
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack288,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    iVar3 = app::lua_bind::GroundModule__get_touch_moment_flag_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack288,iVar3);
    lib::L2CValue::operator_(aLStack176,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,0);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar5 & 1) == 0) {
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack288,fVar9);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack288,-1.0);
      uVar5 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::operator_(aLStack176,aLStack288);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack288,0);
        uVar5 = lib::L2CValue::operator__(aLStack240,aLStack288);
        lib::L2CValue::_L2CValue(aLStack288);
        if ((uVar5 & 1) != 0) {
          bVar1 = true;
          goto LAB_710002bac8;
        }
        lib::L2CValue::_L2CValue(aLStack240);
LAB_710002be50:
        lib::L2CValue::L2CValue(aLStack288,_WEAPON_CLOUD_WAVE_STATUS_KIND_HIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710002c040;
      }
      bVar1 = false;
LAB_710002bac8:
      lib::L2CValue::L2CValue(aLStack288,1.0);
      uVar5 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((uVar5 & 1) == 0) {
        if (bVar1) {
          lib::L2CValue::_L2CValue(aLStack240);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_RIGHT);
        lib::L2CValue::operator_(aLStack176,aLStack288);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack288,0);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack288);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack96);
        if (bVar1) {
          lib::L2CValue::_L2CValue(aLStack240);
        }
        if ((uVar5 & 1) == 0) goto LAB_710002be50;
      }
      lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator_(aLStack176,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack288,0);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_DOWN);
        uVar4 = lib::L2CValue::as_integer(aLStack304);
        uVar10 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack288,(float)uVar10);
        lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar10 >> 0x20));
        lib::L2CValue::L2CValue(aLStack96,aLStack288);
        lib::L2CValue::L2CValue(aLStack112,aLStack272);
        pLVar8 = aLStack112;
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar8,0));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack304);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
        lib::L2CValue::operator_((L2CValue *)auStack224,pLVar6);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack144,pLVar6);
        lib::L2CAgent::math_atan((L2CAgent *)auStack224,aLStack144,pLVar8);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack224 + 0x10));
        pLVar6 = aLStack96;
        lib::L2CValue::operator_(aLStack128,pLVar6);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CAgent::math_deg((L2CAgent *)aLStack128,pLVar6);
        lib::L2CValue::operator_(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator_(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack304,0xb02d79a4b);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar7 = lib::L2CValue::as_integer(aLStack304);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack112);
        uVar5 = lib::L2CValue::operator__(aLStack160,aLStack192);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack160);
          uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_CLOUD_WAVE_STATUS_KIND_HIT);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue(aLStack256);
            goto LAB_710002c040;
          }
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack112);
          }
        }
        lib::L2CValue::_L2CValue(aLStack256);
      }
    }
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
LAB_710002bfa4:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) goto LAB_710002c014;
      }
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_710002bfa4;
LAB_710002c014:
      lib::L2CValue::L2CValue(aLStack96,false);
      FUN_7100029980(this,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002c040:
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

