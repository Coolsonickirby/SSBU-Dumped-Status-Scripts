
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoFlowerpot::status::Throwed_main_loop
          (L2CWeaponMurabitoFlowerpot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_INT_DISABLE_TOUCH_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar11 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) goto LAB_7100034694;
  iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    bVar1 = app::WeaponSpecializer_MurabitoFlowerpot::is_touch_asase(pBVar8);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_ASASE);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_flag_impl(*ppBVar11,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_BOUND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_floor_touch_line_impl(*ppBVar11,uVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack192,0x66933a7e6);
        HVar9 = lib::L2CValue::as_hash(aLStack192);
        fVar12 = (float)app::sv_math::randf(HVar9,1.0);
        lib::L2CValue::L2CValue(aLStack176,fVar12);
        lib::L2CValue::L2CValue(aLStack80,100.0);
        lib::L2CValue::operator_(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack224,0xa6b019112);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_MURABITO_FLOWERPOT);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_SHIZUE_POT);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0x9a1846cb6);
            uVar6 = lib::L2CValue::as_integer(aLStack80);
            uVar10 = lib::L2CValue::as_integer(aLStack224);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
            lib::L2CValue::L2CValue(aLStack208,fVar12);
            goto LAB_71000348dc;
          }
          lib::L2CValue::L2CValue(aLStack208,0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0xfc8a12ede);
          uVar6 = lib::L2CValue::as_integer(aLStack80);
          uVar10 = lib::L2CValue::as_integer(aLStack224);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
          lib::L2CValue::L2CValue(aLStack208,fVar12);
LAB_71000348dc:
          lib::L2CValue::_L2CValue(aLStack80);
        }
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) != 0) goto LAB_7100034620;
        lib::L2CValue::L2CValue(aLStack128,0xa9bd4aeb6);
        FUN_7100034080(aLStack112,this,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_BOUND);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_MURABITO_FLOWERPOT_BOUND);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        app::lua_bind::AttackModule__clear_all_impl(*ppBVar11);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_MURABITO_FLOWERPOT);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_SHIZUE_POT);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0x17f607ab5d);
            HVar9 = lib::L2CValue::as_hash(aLStack80);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar11,HVar9,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack144,iVar3);
            goto LAB_7100034b50;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x1899327ed6);
          HVar9 = lib::L2CValue::as_hash(aLStack80);
          iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar11,HVar9,true,false,false,false,0)
          ;
          lib::L2CValue::L2CValue(aLStack144,iVar3);
LAB_7100034b50:
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack160,0xc61ff5239);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar9 = lib::L2CValue::as_hash(aLStack160);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar11,iVar3,HVar9,-1);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,2);
        lib::L2CValue::L2CValue
                  (aLStack160,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_INT_DISABLE_TOUCH_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar7 = aLStack112;
        goto LAB_7100034688;
      }
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100034620:
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_FLOWERPOT_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    lib::L2CValue::_L2CValue(aLStack96);
    return;
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_WATER);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_7100034688:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    bVar1 = app::WeaponSpecializer_MurabitoFlowerpot::is_water(pBVar8);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_FLOWERPOT_INSTANCE_WORK_ID_FLAG_WATER);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack112,0xc3fc23b55);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar9 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar11,iVar3,HVar9,-1);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar7 = aLStack80;
      goto LAB_7100034688;
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100034694:
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = (uVar6 & 1) != 0;
  if (bVar2) {
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar2);
  return;
}

