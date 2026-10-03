
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000258d0(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
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
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack384,false);
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack400,fVar10);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_EXTEND_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack576,iVar3);
    lib::L2CValue::operator/(pLVar8,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack576,1.0);
    uVar5 = lib::L2CValue::operator<=(aLStack576,aLStack416);
    lib::L2CValue::~L2CValue(aLStack576);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,1.0);
      fVar10 = (float)lib::L2CValue::as_number(aLStack576);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::L2CValue(aLStack576,1.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,
                 _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_MOTION_RATE);
      fVar10 = (float)lib::L2CValue::as_number(aLStack576);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::L2CValue(aLStack576,true);
      lib::L2CValue::operator=(aLStack384,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
    }
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_BITE_POSITION_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack576,1.0);
    lib::L2CValue::operator+(aLStack160,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    uVar5 = lib::L2CValue::operator<(aLStack400,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      lib::L2CValue::L2CValue(aLStack160,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) goto LAB_7100025dbc;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack160);
LAB_7100025dbc:
        lib::L2CValue::L2CValue(aLStack576,true);
        lib::L2CValue::operator=((L2CValue *)&local_90,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
      }
      lib::L2CValue::L2CValue(aLStack576,false);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_BATTLE_OBJECT)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack576,true);
          lib::L2CValue::operator=((L2CValue *)&local_90,aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
        }
      }
      lib::L2CValue::L2CValue(aLStack576,false);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack576,false);
        uVar5 = lib::L2CValue::operator==(aLStack160,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack576,0x330cc313f5);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack576);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack576,true);
            lib::L2CValue::operator=((L2CValue *)&local_90,aLStack576);
            lib::L2CValue::~L2CValue(aLStack576);
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack576,true);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_RESET_SHORTEN_EXPAND_FRAME_DONE
                  );
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack576,false);
        uVar5 = lib::L2CValue::operator==(aLStack160,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_BITE_POSITION_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack576,iVar3);
          fVar10 = (float)lib::L2CValue::as_number(aLStack576);
          app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl
                    (*ppBVar9,fVar10,true,false,false);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack576,1.0);
          fVar10 = (float)lib::L2CValue::as_number(aLStack576);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue(aLStack576,1.0);
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_MOTION_RATE);
          fVar10 = (float)lib::L2CValue::as_number(aLStack576);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue
                    (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_NECK_TRANS);
          iVar3 = lib::L2CValue::as_integer(aLStack576);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack160,fVar10);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_JOINT_NECK_NUM);
          lib::L2CValue::operator*(aLStack160,aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue
                    (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH);
          iVar3 = lib::L2CValue::as_integer(aLStack576);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack192,fVar10);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue(aLStack576,0.0);
          lib::L2CValue::operator+(aLStack176,aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue
                    (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH);
          fVar10 = (float)lib::L2CValue::as_number(aLStack208);
          iVar3 = lib::L2CValue::as_integer(aLStack576);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::operator/(aLStack176,aLStack192);
          lib::L2CValue::L2CValue(aLStack576,0.0);
          lib::L2CValue::operator+(aLStack208,aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::L2CValue
                    (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH_RATE);
          fVar10 = (float)lib::L2CValue::as_number(aLStack224);
          iVar3 = lib::L2CValue::as_integer(aLStack576);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::L2CValue(aLStack576,true);
          lib::L2CValue::operator=(aLStack384,aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
        }
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    }
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack384);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_RESET_SHORTEN_EXPAND_FRAME_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack576,false);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH);
        iVar3 = lib::L2CValue::as_integer(aLStack576);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack176,0x1003d257f5);
        uVar5 = lib::L2CValue::as_integer(aLStack576);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack160,fVar10);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack192,0x103fdf68ac);
        uVar5 = lib::L2CValue::as_integer(aLStack576);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack176,fVar10);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::operator-(aLStack176,aLStack160);
        lib::L2CValue::operator-((L2CValue *)&local_90,aLStack160);
        lib::L2CValue::operator/(aLStack208,aLStack192);
        lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack256,0x1983a4ef3d);
        uVar5 = lib::L2CValue::as_integer(aLStack576);
        uVar6 = lib::L2CValue::as_integer(aLStack256);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack240,iVar3);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack272,0x19544f5d7c);
        uVar5 = lib::L2CValue::as_integer(aLStack576);
        uVar6 = lib::L2CValue::as_integer(aLStack272);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack256,iVar3);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::operator-(aLStack256,aLStack240);
        lib::L2CValue::operator*(aLStack272,aLStack224);
        lib::L2CValue::operator+(aLStack240,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack304,0x146eaeca66);
        uVar5 = lib::L2CValue::as_integer(aLStack576);
        uVar6 = lib::L2CValue::as_integer(aLStack304);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack288,fVar10);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::operator*(aLStack448,aLStack288);
        lib::L2CValue::operator=(aLStack448,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack576,1.0);
        uVar5 = lib::L2CValue::operator<(aLStack448,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack576,1.0);
          lib::L2CValue::operator=(aLStack448,aLStack576);
          lib::L2CValue::~L2CValue(aLStack576);
        }
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_EXTEND_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack448);
        iVar4 = lib::L2CValue::as_integer(aLStack576);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue
                  (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_RESET_SHORTEN_EXPAND_FRAME_DONE
                  );
        iVar3 = lib::L2CValue::as_integer(aLStack576);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack448);
      }
    }
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    pLVar8 = aLStack384;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_STALK_SHORTEN);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack576,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_STALK_SHORTEN_DONE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack160,0x10539e7aad);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack576,fVar10);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
        uVar5 = lib::L2CValue::operator<=(aLStack576,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_LW_END);
          lib::L2CValue::L2CValue(aLStack368,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack368);
          pLVar8 = aLStack352;
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_LW_FALL_END);
          lib::L2CValue::L2CValue(aLStack336,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::~L2CValue(aLStack336);
          pLVar8 = aLStack320;
        }
        lib::L2CValue::~L2CValue(pLVar8);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::~L2CValue(aLStack576);
        return;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_STALK_SHORTEN);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack576);
    }
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    pLVar8 = aLStack576;
  }
  lib::L2CValue::~L2CValue(pLVar8);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BITE_ATTACK_DONE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack576,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::L2CValue(aLStack576,1.0);
    lib::L2CValue::operator+(aLStack160,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack192,0x1130c97644);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack576,iVar3);
    uVar5 = lib::L2CValue::operator<=(aLStack576,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_ANIMCMD_GAME);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x196674fe26);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar9,iVar3,HVar7,-1);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BITE_ATTACK_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack576);
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BITE_ATTACK_CLEAR_DONE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack576,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::L2CValue(aLStack576,1.0);
    lib::L2CValue::operator+(aLStack160,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack192,0x172bd88319);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack576,iVar3);
    uVar5 = lib::L2CValue::operator<=(aLStack576,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_ANIMCMD_GAME);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1fe17f95d4);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar9,iVar3,HVar7,-1);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::L2CValue
                (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BITE_ATTACK_CLEAR_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack576);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_ATTACK_LERP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar9,iVar3,false);
    lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x1075eacc5f);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack576,fVar10);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0x1049e7f306);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::operator-((L2CValue *)&local_90,aLStack576);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CHARGE_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack208,fVar10);
      lib::L2CValue::operator*(aLStack160,aLStack208);
      lib::L2CValue::operator+(aLStack576,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack192,0);
      lib::L2CValue::L2CValue(aLStack208,false);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack208);
      app::lua_bind::AttackModule__set_power_impl(*ppBVar9,iVar3,fVar10,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack576);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar9,iVar3,false);
  lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x15ff1304c3);
    uVar5 = lib::L2CValue::as_integer(aLStack576);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue
              (aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH_RATE);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack576,1.0);
    lib::L2CValue::operator-(aLStack576,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::operator*(aLStack208,aLStack160);
    lib::L2CValue::operator+((L2CValue *)&local_90,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    fVar10 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar9,fVar10);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack576,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar8,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack576,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar8,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    if ((uVar5 & 1) == 0) goto LAB_7100027360;
    lib::L2CValue::L2CValue(aLStack576,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack576);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack576);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue(aLStack528,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack176,0x54f934137);
    this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    this_04 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    this_05 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    HVar7 = lib::L2CValue::as_hash(aLStack176);
    uVar5 = lib::L2CValue::as_number(this_03);
    lVar12 = lib::L2CValue::as_number(this_04);
    uVar11 = lib::L2CValue::as_number(this_05);
    local_90 = uVar5 & 0xffffffff | lVar12 << 0x20;
    uStack136 = (ulong)uVar11;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar9,HVar7,(Vector3f *)&local_90,true);
    lib::L2CValue::L2CValue(aLStack576,(float)local_90);
    lib::L2CValue::L2CValue(aLStack560,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack544,(float)uStack136);
    lib::L2CValue::operator=(pLVar8,aLStack576);
    lib::L2CValue::operator=(this_01,aLStack560);
    lib::L2CValue::operator=(this_02,aLStack544);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack176);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack576,0.0);
    lib::L2CValue::operator+(pLVar8,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_X);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack576,0.0);
    lib::L2CValue::operator+(pLVar8,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_Y);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_CHANGE_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue(aLStack576);
    lVar12 = -0x90;
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar8,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    if ((uVar5 & 1) == 0) goto LAB_7100027360;
    lib::L2CValue::L2CValue(aLStack464,0x130e29abcf);
    lib::L2CValue::L2CValue(aLStack480,true);
    FUN_7100022220(this,aLStack464,aLStack480);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_MOTION_RATE)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack576,fVar10);
    fVar10 = (float)lib::L2CValue::as_number(aLStack576);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
    lib::L2CValue::~L2CValue(aLStack576);
    lVar12 = -0x80;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar12));
LAB_7100027360:
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_EXTEND_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_STALK_LENGTH);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_STALK_SHORTEN);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack192,pLVar8);
    lib::L2CValue::operator/(aLStack192,(L2CValue *)&local_90);
    lib::L2CValue::L2CValue(aLStack576,1.0);
    uVar5 = lib::L2CValue::operator<(aLStack576,aLStack208);
    lib::L2CValue::~L2CValue(aLStack576);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,1.0);
      lib::L2CValue::operator=(aLStack208,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
    }
    lib::L2CValue::operator*(aLStack160,aLStack208);
    lib::L2CValue::operator=(aLStack160,aLStack576);
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_SHORTEN_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack576,0);
    uVar5 = lib::L2CValue::operator<(aLStack576,aLStack192);
    lib::L2CValue::~L2CValue(aLStack576);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator/(aLStack192,(L2CValue *)&local_90);
      lib::L2CValue::operator=(aLStack208,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
    }
    lib::L2CValue::L2CValue(aLStack576,4.0);
    lib::L2CValue::operator-(aLStack160,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::operator*(aLStack256,aLStack208);
    lib::L2CValue::operator-(aLStack160,aLStack240);
    lib::L2CValue::operator=(aLStack160,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack576,1);
    lib::L2CValue::operator+(aLStack192,aLStack576);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::operator=(aLStack192,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_90,aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_STALK_SHORTEN_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack576);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack576);
    }
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_SHORTEN_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_JOINT_NECK_NUM);
  lib::L2CValue::operator/(aLStack160,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::operator=(aLStack176,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack576,0.0);
  lib::L2CValue::operator+(aLStack176,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_NECK_TRANS);
  fVar10 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  FUN_7100023410(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

