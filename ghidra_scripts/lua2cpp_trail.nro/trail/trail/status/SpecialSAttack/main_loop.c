
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialSSearch_main_loop(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *this_01;
  L2CValue *this_02;
  void *pvVar8;
  ulong *puVar9;
  GroundCollisionLine *pGVar10;
  float *pfVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong auStack720 [2];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  ulong auStack528 [2];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  L2CValue aLStack144 [16];
  ulong local_80;
  undefined8 uStack120;
  void **local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  ppBVar12 = &this->moduleAccessor;
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_GUIDE_EFFECT_HANDLE)
    ;
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
      uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
        lib::L2CValue::L2CValue(aLStack592,fVar13);
        FUN_7100028280(aLStack576,this,aLStack592);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack576);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack560);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack176);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        uVar14 = lib::L2CValue::as_integer(aLStack144);
        uVar4 = lib::L2CValue::as_number(pLVar5);
        lVar17 = lib::L2CValue::as_number(pLVar7);
        uVar15 = lib::L2CValue::as_number((L2CValue *)&local_80);
        local_70 = (void **)(uVar4 & 0xffffffff | lVar17 << 0x20);
        plStack104 = (lua_State *)(ulong)uVar15;
        app::lua_bind::EffectModule__set_pos_impl(*ppBVar12,uVar14,(Vector3f *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        puVar9 = auStack160;
        goto LAB_71000263f4;
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_TARGET_ID);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x50000000);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack528,aLStack144);
        lib::L2CValue::L2CValue(aLStack544,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
        FUN_7100027700(this,auStack528,aLStack544);
        lib::L2CValue::_L2CValue(aLStack544);
        puVar9 = auStack528;
LAB_71000263f4:
        lib::L2CValue::_L2CValue((L2CValue *)puVar9);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_BACK_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue(aLStack608,fVar13);
    lib::L2CValue::L2CValue(aLStack624,1.0);
    FUN_7100014fd0(this,aLStack608,aLStack624);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) {
LAB_7100026548:
      puVar9 = &local_80;
LAB_71000266e0:
      lib::L2CValue::_L2CValue((L2CValue *)puVar9);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar4 & 1) == 0) goto LAB_7100026510;
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
LAB_710002663c:
        lib::L2CValue::L2CValue(aLStack656,0x1017efc1d7);
        lib::L2CValue::L2CValue(aLStack672,0x14965a4e97);
        lib::L2CValue::L2CValue(aLStack688,true);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack688);
        lib::L2CValue::_L2CValue(aLStack672);
        lib::L2CValue::_L2CValue(aLStack656);
        lib::L2CValue::L2CValue(aLStack704,false);
        FUN_71000222a0(this);
        lib::L2CValue::_L2CValue(aLStack704);
        lib::L2CValue::L2CValue((L2CValue *)auStack720,false);
        FUN_7100025270(this,auStack720);
        puVar9 = auStack720;
        goto LAB_71000266e0;
      }
LAB_7100026510:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) != 0) goto LAB_7100026548;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar4 & 1) != 0) goto LAB_710002663c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000266f0:
    lib::L2CValue::_L2CValue(aLStack144);
    return;
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
LAB_7100026164:
    puVar9 = &local_80;
LAB_7100026168:
    lib::L2CValue::_L2CValue((L2CValue *)puVar9);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) goto LAB_7100026164;
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_ATTACK_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack240,0xaa5d51ffa);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar4,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
    lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    uVar4 = lib::L2CValue::operator__((L2CValue *)auStack160,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x130dd4d94a);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar4,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,10.0);
      lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      uVar16 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack272,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack256);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack320,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack336,pLVar5);
      lib::L2CValue::L2CValue(aLStack352,aLStack144);
      FUN_71000270f0(aLStack304,this,aLStack320,aLStack336,aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack288);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),true);
      uVar4 = lib::L2CValue::as_number(pLVar5);
      uVar14 = lib::L2CValue::as_number(pLVar7);
      local_70 = (void **)(uVar4 & 0xffffffff | (ulong)uVar14 << 0x20);
      plStack104 = (lua_State *)0x0;
      uVar4 = lib::L2CValue::as_number(this_01);
      uVar14 = lib::L2CValue::as_number(this_02);
      local_80 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
      uStack120 = 0;
      bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack224 + 0x10));
      pvVar8 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                                 (*ppBVar12,(Vector2f *)&local_70,(Vector2f *)&local_80,
                                  (bool)(bVar1 & 1));
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,pvVar8);
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      uVar4 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar4 & 1) == 0) {
        pGVar10 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack192);
        bVar1 = app::sv_ground_collision_line::is_floor(pGVar10);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
        uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar4 & 1) != 0) goto LAB_71000267cc;
      }
      else {
LAB_71000267cc:
        bVar1 = app::lua_bind::GroundModule__can_entry_cliff_impl(*ppBVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
        uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar4 & 1) != 0) {
          pfVar11 = (float *)app::lua_bind::GroundModule__hang_cliff_pos_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack384,*pfVar11);
          lib::L2CValue::L2CValue(aLStack368,pfVar11[1]);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack384);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack368);
          puVar9 = &local_80;
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,SUB81(puVar9,0));
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack384);
          pLVar5 = (L2CValue *)
                   lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),0x1fbdb2615);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
          uVar4 = lib::L2CValue::operator_(pLVar5,pLVar7);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
            pLVar7 = (L2CValue *)
                     lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),0x1fbdb2615);
            lib::L2CValue::operator_(pLVar7,pLVar5);
          }
          pLVar5 = (L2CValue *)
                   lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),0x1fbdb2615);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
          lib::L2CValue::operator_(pLVar5,pLVar7);
          pLVar5 = (L2CValue *)
                   lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),0x18cdc1683);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
          lib::L2CValue::operator_(pLVar5,pLVar7);
          pLVar5 = aLStack240;
          lib::L2CAgent::math_atan((L2CAgent *)auStack224,pLVar5,(L2CValue *)puVar9);
          lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar5);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          uVar4 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack224);
            lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
          fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          app::lua_bind::GroundModule__clear_cliff_point_impl(*ppBVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0x50000000);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack224,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_TARGET_ID);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_STICK);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar2);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_TRAIL_GENERATE_ARTICLE_LOCKONCURSOR);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar12,iVar2,0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue(aLStack400,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_TURN);
          lib::L2CValue::L2CValue(aLStack416,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue((L2CValue *)auStack160);
          goto LAB_71000266f0;
        }
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      puVar9 = auStack160;
      goto LAB_7100026168;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_TARGET_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x50000000);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack464,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack480,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack480);
        pLVar5 = aLStack464;
      }
      else {
        FUN_7100027580(this);
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_TURN);
        lib::L2CValue::L2CValue(aLStack448,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack448);
        pLVar5 = aLStack432;
      }
      goto LAB_7100026278;
    }
  }
  lib::L2CValue::L2CValue(aLStack496,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_TURN);
  lib::L2CValue::L2CValue(aLStack512,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack512);
  pLVar5 = aLStack496;
LAB_7100026278:
  lib::L2CValue::_L2CValue(pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

