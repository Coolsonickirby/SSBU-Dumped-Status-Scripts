
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLucas::status::Throw_exec(L2CFighterLucas *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  undefined auStack624 [32];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined local_170 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack512,0);
  lib::L2CValue::L2CValue(aLStack528,0);
  lib::L2CValue::L2CValue(aLStack544,0);
  lib::L2CValue::L2CValue(aLStack560,0);
  lib::L2CValue::L2CValue(aLStack576,0);
  lib::L2CValue::L2CValue(aLStack592,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack624 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack624,0);
  lib::L2CValue::L2CValue(aLStack640,0);
  lib::L2CValue::L2CValue(aLStack656,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_ON);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_170,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_170);
  lib::L2CValue::_L2CValue((L2CValue *)local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_170,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_ON);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_170);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_170,lVar5);
    lib::L2CValue::operator_(aLStack592,(L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)local_170,0x83ec83f4b);
    uVar6 = lib::L2CValue::operator__(aLStack592,(L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    if ((uVar6 & 1) != 0) {
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_170,fVar10);
      lib::L2CValue::operator_(aLStack512,(L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      fVar10 = (float)app::lua_bind::GroundModule__get_z_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_170,fVar10);
      lib::L2CValue::operator_(aLStack640,(L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_170,
                 _FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_OFFSET);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_170);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_THROW_LW_EFFECT_OFFSET_X);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      lib::L2CValue::operator_((L2CValue *)&local_90,aLStack160);
      lib::L2CValue::operator_((L2CValue *)local_170,aLStack512);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,
                 _FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_THROW_LW_EFFECT_OFFSET_Z);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_170,fVar10);
      lib::L2CValue::operator_((L2CValue *)local_170,aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_Z_ZERO);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_170,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_170,0.0);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)local_170);
        lib::L2CValue::_L2CValue((L2CValue *)local_170);
      }
      lib::L2CValue::L2CValue(aLStack208,false);
      fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      lib::L2CValue::operator_((L2CValue *)&local_90,aLStack176);
      lib::L2CValue::operator_(aLStack544,(L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack224,fVar10);
      lib::L2CValue::L2CValue((L2CValue *)local_170,10.0);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::operator_(aLStack640,aLStack192);
      lib::L2CValue::operator_(aLStack640,(L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue(aLStack224,-15.0);
      lib::L2CValue::L2CValue(aLStack240,true);
      pLVar8 = aLStack544;
      FUN_7100006ba0(local_170,this,pLVar8,aLStack560,&local_90,aLStack224,aLStack544,aLStack560,
                     auStack624,aLStack576,aLStack240);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)local_170);
      lib::L2CValue::operator_(aLStack544,(L2CValue *)(local_170 + 0x10));
      lib::L2CValue::operator_(aLStack560,aLStack336);
      lib::L2CValue::operator_((L2CValue *)auStack624,aLStack320);
      lib::L2CValue::operator_(aLStack576,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)(local_170 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) != 0) {
        lib::L2CAgent::math_atan((L2CAgent *)auStack624,aLStack576,pLVar8);
        lib::L2CValue::operator_(aLStack528,(L2CValue *)local_170);
        lib::L2CValue::_L2CValue((L2CValue *)local_170);
        lib::L2CValue::L2CValue(aLStack240,0xc16c216f6);
        lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
        lib::L2CValue::operator_(aLStack528);
        lib::L2CValue::L2CValue
                  (aLStack400,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_SCALE);
        iVar3 = lib::L2CValue::as_integer(aLStack400);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack384,fVar10);
        lib::L2CValue::L2CValue(aLStack416,EFFECT_SUB_ATTRIBUTE_NONE);
        lib::L2CValue::L2CValue(aLStack432,-1);
        HVar7 = lib::L2CValue::as_hash(aLStack240);
        uVar6 = lib::L2CValue::as_number(aLStack544);
        lVar5 = lib::L2CValue::as_number(aLStack560);
        uVar11 = lib::L2CValue::as_number(aLStack640);
        local_170._0_8_ = (void **)(uVar6 & 0xffffffff | lVar5 << 0x20);
        local_170._8_8_ = (lua_State *)(ulong)uVar11;
        uVar6 = lib::L2CValue::as_number((L2CValue *)(auStack272 + 0x10));
        lVar5 = lib::L2CValue::as_number((L2CValue *)auStack272);
        uVar11 = lib::L2CValue::as_number(aLStack288);
        local_90 = uVar6 & 0xffffffff | lVar5 << 0x20;
        uStack136 = (ulong)uVar11;
        fVar10 = (float)lib::L2CValue::as_number(aLStack384);
        uVar11 = lib::L2CValue::as_integer(aLStack416);
        iVar3 = lib::L2CValue::as_integer(aLStack432);
        uVar11 = app::lua_bind::EffectModule__req_impl
                           (*ppBVar9,HVar7,(Vector3f *)local_170,(Vector3f *)&local_90,fVar10,uVar11
                            ,iVar3,false,0);
        lib::L2CValue::L2CValue(aLStack224,uVar11);
        lib::L2CValue::operator_(aLStack656,aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_170,_FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_THROW_LW_EFFECT_HANDLE)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack656);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_170);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)local_170);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_170,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_UPDATE
                  );
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_170);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_170);
      }
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_UPDATE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lVar5 = -0x90;
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_THROW_LW_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_170,_EFFECT_HANDLE_NULL);
    uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) goto LAB_7100006330;
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_170,
               _FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_OFFSET);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_170);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_THROW_LW_EFFECT_OFFSET_X);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::operator_(aLStack192,aLStack160);
    lib::L2CValue::operator_((L2CValue *)local_170,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_THROW_LW_EFFECT_OFFSET_Z);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_170,fVar10);
    lib::L2CValue::operator_((L2CValue *)local_170,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_Z_ZERO);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_170,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_170,0.0);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)local_170);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
    }
    lib::L2CValue::L2CValue(aLStack208,false);
    fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)local_170,fVar10);
    lib::L2CValue::operator_((L2CValue *)local_170,aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar10);
    lib::L2CValue::L2CValue((L2CValue *)local_170,10.0);
    lib::L2CValue::operator_((L2CValue *)(auStack272 + 0x10),(L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
    fVar10 = (float)app::lua_bind::GroundModule__get_z_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)local_170,fVar10);
    lib::L2CValue::operator_((L2CValue *)local_170,aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,-15.0);
    lib::L2CValue::L2CValue(aLStack416,true);
    pLVar8 = aLStack224;
    FUN_7100006ba0(local_170,this,pLVar8,aLStack240,aLStack384,aLStack400,aLStack224,aLStack240,
                   auStack272,aLStack288,aLStack416);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)local_170);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)(local_170 + 0x10));
    lib::L2CValue::operator_(aLStack240,aLStack336);
    lib::L2CValue::operator_((L2CValue *)auStack272,aLStack320);
    lib::L2CValue::operator_(aLStack288,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)(local_170 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    if ((bVar2 & 1U) != 0) {
      lib::L2CAgent::math_atan((L2CAgent *)auStack272,aLStack288,pLVar8);
      lib::L2CValue::L2CValue(aLStack400,_FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_THROW_LW_EFFECT_HANDLE)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack400);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack384,iVar3);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack416,MA_MSC_EFFECT_SET_POS);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack272 + 0x10));
      app::sv_module_access::effect(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack416);
      pLVar8 = (L2CValue *)(ulong)_MA_MSC_EFFECT_SET_ROT;
      lib::L2CValue::L2CValue(aLStack432,_MA_MSC_EFFECT_SET_ROT);
      lib::L2CValue::L2CValue(aLStack448,0.0);
      lib::L2CValue::L2CValue(aLStack464,0.0);
      lib::L2CAgent::math_deg((L2CAgent *)local_170,pLVar8);
      lib::L2CValue::operator_(aLStack496);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack464);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack480);
      app::sv_module_access::effect(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
    }
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lVar5 = -0x80;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar5));
LAB_7100006330:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_OFF);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_170,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_170);
  lib::L2CValue::_L2CValue((L2CValue *)local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_170,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_OFF);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_170);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::L2CValue((L2CValue *)local_170,_MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xc16c216f6);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,false);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_170);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_module_access::effect(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack672);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_UPDATE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_170,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)local_170);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_170,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_UPDATE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_170);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_170);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack656);
  lib::L2CValue::_L2CValue(aLStack640);
  lib::L2CValue::_L2CValue((L2CValue *)auStack624);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack624 + 0x10));
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  return;
}

