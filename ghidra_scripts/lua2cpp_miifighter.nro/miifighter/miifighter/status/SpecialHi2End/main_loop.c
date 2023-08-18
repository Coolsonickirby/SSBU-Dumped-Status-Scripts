
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialHi2End_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  AttackData *pAVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar1 & 1U) == 0) {
    ppBVar10 = &this->moduleAccessor;
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) == 0) {
      this_00 = &this->globalTable;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_FLAG_SET_FINISH_ANGLE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_FLAG_SET_FINISH_ANGLE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack128,0x1a19d9fc40);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack112,fVar11);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack144,0x19d41a0d59);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          uVar7 = lib::L2CValue::as_integer(aLStack144);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack128,fVar11);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack160,fVar11);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
          lib::L2CValue::operator_(aLStack160,pLVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar6 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
            lib::L2CValue::operator_(pLVar5,aLStack128);
            fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack176,fVar11);
            lib::L2CValue::operator_(aLStack176);
            lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_WORK_FLOAT_FINISH_ANGLE);
            fVar11 = (float)lib::L2CValue::as_number(aLStack160);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
          }
          else {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
            lib::L2CValue::operator_(pLVar5,aLStack112);
            fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack160,fVar11);
            lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_WORK_FLOAT_FINISH_ANGLE);
            fVar11 = (float)lib::L2CValue::as_number(aLStack160);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_FLAG_SET_ATTACK_ANGLE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_FLAG_SET_ATTACK_ANGLE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue(aLStack128,false);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = lib::L2CValue::as_bool(aLStack128);
          pAVar8 = (AttackData *)
                   app::lua_bind::AttackModule__attack_data_impl(*ppBVar10,iVar3,(bool)(bVar2 & 1));
          app::lua_bind::AttackData__store_l2c_table_impl(pAVar8);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_60,0x7d57445dc);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_WORK_FLOAT_FINISH_ANGLE);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack128,fVar11);
          lib::L2CValue::operator_(pLVar5,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack144,aLStack112);
          lib::L2CValue::L2CValue(aLStack160,0);
          lib::L2CValue::L2CValue(aLStack176,0x167);
          lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
          lib::L2CValue::operator_(aLStack112,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack128,0);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::AttackModule__set_vector_impl(*ppBVar10,iVar3,iVar4,false);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_FLAG_SET_ROLL_BACK_ANGLE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_WORK_FLOAT_FINISH_ANGLE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,fVar11);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            uVar6 = lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
              lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::operator_(aLStack112,aLStack128);
              goto LAB_710003bf78;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
            lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::operator_(aLStack112,aLStack128);
LAB_710003bf78:
            lib::L2CValue::_L2CValue(aLStack128);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_WORK_FLOAT_FINISH_ANGLE);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_MIIFIGHTER_STATUS_SYOTEN_KICK_WORK_FLOAT_FINISH_ANGLE);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,fVar11);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        uVar6 = lib::L2CValue::as_number(aLStack128);
        lVar13 = lib::L2CValue::as_number(aLStack208);
        uVar12 = lib::L2CValue::as_number(aLStack224);
        local_60 = uVar6 & 0xffffffff | lVar13 << 0x20;
        uStack88 = (ulong)uVar12;
        app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar10,HVar9,(Vector3f *)&local_60,0,0)
        ;
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack112);
        iVar3 = 0;
        goto LAB_710003b90c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  iVar3 = 1;
LAB_710003b90c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

