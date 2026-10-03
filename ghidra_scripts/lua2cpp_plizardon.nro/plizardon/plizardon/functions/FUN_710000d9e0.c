
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000d9e0(L2CFighterPlizardon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    return;
  }
  ppBVar10 = &this->moduleAccessor;
  bVar2 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_PLIZARDON_STATUS_SPECIAL_S_FLAG_IS_STATUS_CHANGE_BLOWN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack160,
                 _FIGHTER_PLIZARDON_STATUS_SPECIAL_S_FLAG_IS_DISABLE_FIGHTER_HIT_EXPLOSION);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack144);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_KIND_SPECIAL_S_BLOWN);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
  fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator<(aLStack96,aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_KIND_SPECIAL_S_BLOWN);
    lib::L2CValue::L2CValue(aLStack128,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710000e478;
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0xd2b3a620b);
    HVar8 = lib::L2CValue::as_hash(aLStack176);
    uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar10,HVar8);
    lib::L2CValue::L2CValue(aLStack160,uVar4);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator+(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,2.0);
    lib::L2CValue::operator/(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0x125c267636);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar9 = lib::L2CValue::as_integer(aLStack176);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::operator/(aLStack112,aLStack144);
    lib::L2CValue::operator=(aLStack128,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0x976c3b29b);
    HVar8 = lib::L2CValue::as_hash(aLStack176);
    uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar10,HVar8);
    lib::L2CValue::L2CValue(aLStack160,uVar4);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator+(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,2.0);
    lib::L2CValue::operator/(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0x125c267636);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar9 = lib::L2CValue::as_integer(aLStack176);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::operator/(aLStack112,aLStack144);
    lib::L2CValue::operator=(aLStack128,aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,0.1);
  lib::L2CValue::operator-(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  uVar6 = lib::L2CValue::operator<=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar6 & 1) == 0) {
LAB_710000e23c:
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710000e34c;
      lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_frame_impl(*ppBVar10,fVar11,true);
      lib::L2CValue::~L2CValue(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
      GVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
LAB_710000e45c:
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
LAB_710000e34c:
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack96,fVar11);
          lib::L2CValue::L2CValue(aLStack144,0xd2b3a620b);
          HVar8 = lib::L2CValue::as_hash(aLStack144);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack144);
          fVar11 = (float)lib::L2CValue::as_number(aLStack96);
          app::lua_bind::MotionModule__set_frame_impl(*ppBVar10,fVar11,true);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
          lib::L2CValue::L2CValue(aLStack144,GROUND_CORRECT_KIND_AIR);
          GVar5 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
          lib::L2CValue::~L2CValue(aLStack144);
          goto LAB_710000e45c;
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_PLIZARDON_STATUS_SPECIAL_S_WORK_INT_SPECIAL_S_ROTATE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_PLIZARDON_STATUS_SPECIAL_S_WORK_INT_SPECIAL_S_ROTATE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack208,0x121a7fe937);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack176,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.1);
    lib::L2CValue::operator-(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator<=(aLStack160,aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xd2b3a620b);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_frame_impl(*ppBVar10,fVar11,true);
      lib::L2CValue::~L2CValue(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_710000e23c;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710000e478:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

