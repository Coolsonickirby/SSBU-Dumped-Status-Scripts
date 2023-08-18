
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRockmanCrashbomb::status::Stick_main_loop
          (L2CWeaponRockmanCrashbomb *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  GroundTouchFlag GVar6;
  GroundCorrectKind GVar7;
  GroundTouchID GVar8;
  ulong *this_00;
  ulong uVar9;
  L2CValue *pLVar10;
  Hash40 HVar11;
  void *pvVar12;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  undefined8 uVar15;
  long lVar16;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  ulong local_130;
  ulong uStack296;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong auStack176 [2];
  L2CValue aLStack160 [16];
  ulong auStack144 [2];
  ulong local_80;
  undefined8 uStack120;
  ulong local_70;
  undefined8 uStack104;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,_WEAPON_ROCKMAN_CRASHBOMB_INSTANCE_WORK_ID_FLAG_CHANGING);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  ppBVar13 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack176);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_ROCKMAN_CRASHBOMB_INSTANCE_WORK_ID_FLAG_SLEEP);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    if ((bVar3 & 1U) != 0) goto LAB_7100024924;
    lib::L2CValue::L2CValue((L2CValue *)&local_130,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_130);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
    uVar9 = lib::L2CValue::operator__((L2CValue *)&local_100,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_ROCKMAN_CRASHBOMB_STATUS_KIND_EXPLODE);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '`'),(L2CValue)0x0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      this_00 = auStack176;
      goto LAB_71000248bc;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_130,
               _WEAPON_ROCKMAN_CRASHBOMB_INSTANCE_WORK_ID_INT_NOW_STICK_BATTLE_OBJECT_ID);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_130);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0x50000000);
    uVar9 = lib::L2CValue::operator__((L2CValue *)&local_100,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    if ((uVar9 & 1) == 0) goto LAB_7100024924;
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,1.0);
    uVar9 = lib::L2CValue::operator__(pLVar10,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_130,_GROUND_TOUCH_FLAG_ALL);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)auStack176,false);
      uVar9 = lib::L2CValue::operator__((L2CValue *)&local_100,(L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_130);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,_GROUND_TOUCH_FLAG_ALL);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        app::lua_bind::GroundModule__attach_impl(*ppBVar13,GVar6);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,GROUND_CORRECT_KIND_GROUND);
        GVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      }
    }
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,2.0);
    uVar9 = lib::L2CValue::operator__((L2CValue *)auStack176,pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    if ((uVar9 & 1) == 0) goto LAB_7100024924;
    uVar15 = app::lua_bind::GroundModule__get_down_movement_speed_impl(*ppBVar13);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue(aLStack192,(L2CValue *)auStack144);
    lua2cpp::L2CFighterBase::Vector2__length_square(this,(L2CValue)(cVar1 + 'P'));
    lib::L2CValue::L2CValue((L2CValue *)&local_100,1e-05);
    uVar9 = lib::L2CValue::operator_((L2CValue *)&local_100,(L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_130);
      pLVar10 = aLStack192;
LAB_7100024d20:
      lib::L2CValue::_L2CValue(pLVar10);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_ALL);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_130);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack208,_GROUND_TOUCH_ID_NONE);
        lib::L2CValue::L2CValue((L2CValue *)&local_130,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        lib::L2CValue::_L2CValue((L2CValue *)&local_130);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_130,_GROUND_TOUCH_FLAG_LEFT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
          bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_130);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_100,_GROUND_TOUCH_ID_LEFT);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
            goto LAB_71000250dc;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_130,GROUND_TOUCH_FLAG_RIGHT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
          bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_130);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_100,_GROUND_TOUCH_ID_RIGHT);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
            goto LAB_71000250dc;
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_130,_GROUND_TOUCH_FLAG_UP);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
          bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
          lib::L2CValue::_L2CValue((L2CValue *)&local_130);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_100,_GROUND_TOUCH_ID_UP);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
            goto LAB_71000250dc;
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_100,_GROUND_TOUCH_ID_DOWN);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
LAB_71000250dc:
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_100,_GROUND_TOUCH_ID_NONE);
        uVar9 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_100);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
        if ((uVar9 & 1) == 0) {
          uVar15 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar13);
          lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar15);
          lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar15 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)&local_130,(L2CValue *)&local_100);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack240);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)(cVar1 + -0x60));
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_130);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue((L2CValue *)&local_100);
          lib::L2CValue::L2CValue(aLStack320,_GROUND_TOUCH_FLAG_ALL);
          uVar5 = lib::L2CValue::as_integer(aLStack320);
          uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar13,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_130,(float)uVar15);
          lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar15 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)&local_70,(L2CValue *)&local_130);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack288);
          lua2cpp::L2CFighterBase::Vector2__create
                    (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue((L2CValue *)&local_130);
          lib::L2CValue::_L2CValue(aLStack320);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,-2.0);
          lib::L2CValue::operator_((L2CValue *)&local_70,pLVar10);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,-2.0);
          lib::L2CValue::operator_((L2CValue *)&local_70,pLVar10);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          GVar8 = lib::L2CValue::as_integer(aLStack208);
          pvVar12 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(*ppBVar13,GVar8);
          if (pvVar12 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack368,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
          }
          else {
            lib::L2CValue::L2CValue(aLStack368,pvVar12);
          }
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
          this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
          this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack400,true);
          uVar9 = lib::L2CValue::as_number(pLVar10);
          uVar5 = lib::L2CValue::as_number(this_01);
          local_70 = uVar9 & 0xffffffff | (ulong)uVar5 << 0x20;
          uStack104 = 0;
          uVar9 = lib::L2CValue::as_number(this_02);
          uVar5 = lib::L2CValue::as_number(this_03);
          local_80 = uVar9 & 0xffffffff | (ulong)uVar5 << 0x20;
          uStack120 = 0;
          bVar2 = lib::L2CValue::as_bool(aLStack400);
          pvVar12 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                                      (*ppBVar13,(Vector2f *)&local_70,(Vector2f *)&local_80,
                                       (bool)(bVar2 & 1));
          if (pvVar12 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack384,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
          }
          else {
            lib::L2CValue::L2CValue(aLStack384,pvVar12);
          }
          lib::L2CValue::_L2CValue(aLStack400);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack384);
          if (((bVar3 & 1U) != 0) &&
             (uVar9 = lib::L2CValue::operator__(aLStack368,aLStack384), (uVar9 & 1) == 0)) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_CORRECT_KIND_NONE);
            GVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            bVar2 = app::lua_bind::GroundModule__attach_ground_impl(*ppBVar13,true);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          }
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack224);
          lVar16 = -0xc0;
          goto LAB_71000254a8;
        }
        pLVar10 = aLStack208;
        goto LAB_7100024d20;
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_100,false);
    uVar9 = lib::L2CValue::operator__((L2CValue *)&local_130,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar9 & 1) != 0) {
      fVar14 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
      fVar14 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar14);
      fVar14 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack208,fVar14);
      lib::L2CValue::L2CValue(aLStack272,0xfa06bb067);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,0);
      lib::L2CValue::L2CValue(aLStack400,-1);
      HVar11 = lib::L2CValue::as_hash(aLStack272);
      uVar9 = lib::L2CValue::as_number((L2CValue *)&local_70);
      lVar16 = lib::L2CValue::as_number((L2CValue *)&local_80);
      uVar5 = lib::L2CValue::as_number(aLStack208);
      local_100 = uVar9 & 0xffffffff | lVar16 << 0x20;
      uStack248 = (ulong)uVar5;
      uVar9 = lib::L2CValue::as_number(aLStack320);
      lVar16 = lib::L2CValue::as_number(aLStack336);
      uVar5 = lib::L2CValue::as_number(aLStack352);
      local_130 = uVar9 & 0xffffffff | lVar16 << 0x20;
      uStack296 = (ulong)uVar5;
      fVar14 = (float)lib::L2CValue::as_number(aLStack368);
      uVar5 = lib::L2CValue::as_integer(aLStack384);
      iVar4 = lib::L2CValue::as_integer(aLStack400);
      uVar5 = app::lua_bind::EffectModule__req_impl
                        (*ppBVar13,HVar11,(Vector3f *)&local_100,(Vector3f *)&local_130,fVar14,uVar5
                         ,iVar4,false,0);
      lib::L2CValue::L2CValue(aLStack224,uVar5);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)&local_130,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_130);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_130);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lVar16 = -0x60;
LAB_71000254a8:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar16));
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      return;
    }
    this_00 = auStack144;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    this_00 = &local_100;
  }
LAB_71000248bc:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_7100024924:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

