
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponInklingInkbullet::status::Hit_main_loop
          (L2CWeaponInklingInkbullet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  Hash40 HVar6;
  ulong *this_00;
  L2CValue *in_x2;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
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
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  ulong local_c0;
  BattleObject *pBStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  ppBVar7 = &this->moduleAccessor;
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar5);
  lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar5[2]);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_c0);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,5);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::EffectModule__detach_all_impl(*ppBVar7,uVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLAG_HIT)
  ;
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLAG_HIT_WALL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) goto LAB_71000363d8;
    lib::L2CValue::L2CValue(aLStack208,aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)auStack240);
    lib::L2CValue::L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar7,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar7,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar7,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar5);
        lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
        lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar7,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar11 >> 0x20));
        lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_c0);
        lib::L2CValue::operator_(aLStack256,aLStack176);
        goto LAB_7100036134;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_LEFT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar7,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_LEFT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar7,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar5);
        lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
        lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_LEFT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar7,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar11 >> 0x20));
        lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_c0);
        lib::L2CValue::operator_(aLStack256,aLStack176);
        goto LAB_7100036134;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar7,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_RIGHT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar7,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar5);
        lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
        lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_RIGHT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar7,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar11 >> 0x20));
        lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_c0);
        lib::L2CValue::operator_(aLStack256,aLStack176);
        goto LAB_7100036134;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack272,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      fVar8 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::operator_((L2CValue *)&local_c0);
      lib::L2CValue::operator_((L2CValue *)auStack240,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::operator_((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack256,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      this_00 = &local_c0;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_UP);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar7,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar5);
      lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
      lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_UP);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar7,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar11);
      lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar11 >> 0x20));
      lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_c0);
      lib::L2CValue::operator_(aLStack256,aLStack176);
LAB_7100036134:
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      this_00 = &local_60;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CAgent::math_atan((L2CAgent *)auStack240,aLStack256,in_x2);
    lib::L2CValue::L2CValue(aLStack304,0x1a72de490f);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::operator_(aLStack272);
    HVar6 = lib::L2CValue::as_hash(aLStack304);
    uVar9 = lib::L2CValue::as_number(aLStack208);
    lVar10 = lib::L2CValue::as_number((L2CValue *)(auStack240 + 0x10));
    uVar3 = lib::L2CValue::as_number(aLStack144);
    local_c0 = uVar9 & 0xffffffff | lVar10 << 0x20;
    pBStack184 = (BattleObject *)(ulong)uVar3;
    uVar9 = lib::L2CValue::as_number(aLStack320);
    lVar10 = lib::L2CValue::as_number(aLStack336);
    uVar3 = lib::L2CValue::as_number(aLStack352);
    local_60 = uVar9 & 0xffffffff | lVar10 << 0x20;
    uStack88 = (ulong)uVar3;
    uVar3 = app::lua_bind::EffectModule__req_impl
                      (*ppBVar7,HVar6,(Vector3f *)&local_c0,(Vector3f *)&local_60,1.0,0,-1,false,0);
    lib::L2CValue::L2CValue(aLStack288,uVar3);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLOAT_R);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLOAT_G);
    lib::L2CValue::L2CValue(aLStack304,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLOAT_B);
    FUN_71000368b0(this,&local_c0,&local_60,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack336,0x16fe772137);
    HVar6 = lib::L2CValue::as_hash(aLStack336);
    iVar4 = app::lua_bind::SoundModule__play_se_impl(*ppBVar7,HVar6,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack320,iVar4);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack336,aLStack208);
    lib::L2CValue::L2CValue(aLStack352,(L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::L2CValue(aLStack368,aLStack144);
    fVar8 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack384,fVar8);
    fVar8 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack400,fVar8);
    FUN_71000369c0(this,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
    lVar10 = -0xc0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0x17f8dcd76c);
    HVar6 = lib::L2CValue::as_hash(aLStack208);
    uVar9 = lib::L2CValue::as_number(aLStack112);
    lVar10 = lib::L2CValue::as_number(aLStack128);
    uVar3 = lib::L2CValue::as_number(aLStack144);
    local_c0 = uVar9 & 0xffffffff | lVar10 << 0x20;
    pBStack184 = (BattleObject *)(ulong)uVar3;
    uStack88 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S;
    local_60 = FIGHTER_STATUS_KIND_SPECIAL_HI;
    uVar3 = app::lua_bind::EffectModule__req_impl
                      (*ppBVar7,HVar6,(Vector3f *)&local_c0,(Vector3f *)&local_60,1.0,0,-1,false,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLOAT_R);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLOAT_G);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack240 + 0x10),_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLOAT_B);
    FUN_71000368b0(this,&local_c0,aLStack208,auStack240 + 0x10);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue(aLStack208);
    lVar10 = -0xb0;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar10));
LAB_71000363d8:
  lib::L2CValue::L2CValue(aLStack256,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

