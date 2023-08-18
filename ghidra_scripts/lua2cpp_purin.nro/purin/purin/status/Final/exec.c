
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPurin::status::FinalEnd_exec(L2CFighterPurin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  undefined4 *puVar8;
  L2CValue *pLVar9;
  code *pcVar10;
  Rect *pRVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined4 auStack304 [4];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined4 auStack224 [4];
  L2CValue aLStack208 [16];
  undefined4 auStack192 [4];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined4 local_60 [4];
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  ppBVar12 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_60,FIGHTER_STATUS_KIND_FINAL);
  uVar5 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_60);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_KIND_FINAL_WAIT);
    uVar5 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_KIND_FINAL_END);
      uVar5 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      if ((uVar5 & 1) == 0) goto LAB_710000d930;
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
      lib::L2CValue::L2CValue(aLStack208,0xdf05c072b);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0x14326f9320);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,iVar3);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_60,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
        fVar13 = (float)lib::L2CValue::as_number((L2CValue *)local_60);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__add_float_impl(*ppBVar12,fVar13,iVar3);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_60,0xdf05c072b);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0x14326f9320);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)local_60);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue((L2CValue *)auStack192);
      lib::L2CValue::L2CValue((L2CValue *)local_60,0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_60,aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
        lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)local_60);
        puVar8 = local_60;
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack224,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack208,fVar13);
        lib::L2CValue::operator_(aLStack208,aLStack176);
        lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue(aLStack208);
        puVar8 = auStack224;
      }
      lib::L2CValue::_L2CValue((L2CValue *)puVar8);
      lib::L2CValue::L2CValue((L2CValue *)local_60,0xdf05c072b);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0xe57714226);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)local_60);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack336,iVar3);
      lib::L2CValue::L2CValue(aLStack352,1.0);
      lib::L2CValue::L2CValue(aLStack368,(L2CValue *)auStack192);
      FUN_710000e4f0(aLStack208,aLStack336,aLStack352,aLStack368);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      fVar13 = (float)lib::L2CValue::as_number(aLStack208);
      app::lua_bind::AttackModule__set_attack_scale_impl(*ppBVar12,fVar13,false);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_ATTACK_SCALE);
      fVar13 = (float)lib::L2CValue::as_number(aLStack208);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
      uVar5 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_INIT_SCALE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
        fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar13);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack304,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack304);
        fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
        lib::L2CValue::operator_((L2CValue *)local_60,(L2CValue *)auStack224);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::operator_((L2CValue *)auStack224,aLStack240);
        lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)auStack192);
        lib::L2CValue::operator_(aLStack240,aLStack320);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue(aLStack320);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        app::lua_bind::PostureModule__set_scale_impl(*ppBVar12,fVar13,false);
        lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
        lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
        iVar3 = lib::L2CValue::as_integer(aLStack320);
        fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::operator_((L2CValue *)auStack224,aLStack240);
        lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)auStack192);
        lib::L2CValue::operator_(aLStack240,aLStack320);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_60,0xb81e7eef7);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)local_60);
      uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar12,HVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,uVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      fVar13 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
      lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue((L2CValue *)local_60,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_60,aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack224);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)local_60);
        puVar8 = local_60;
        goto LAB_710000d904;
      }
      goto LAB_710000d908;
    }
    lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)local_60);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__add_float_impl(*ppBVar12,fVar13,iVar3);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::L2CValue((L2CValue *)local_60,0xdf05c072b);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0xe57714226);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    fVar13 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::AttackModule__set_attack_scale_impl(*ppBVar12,fVar13,false);
    lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack192,(L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_INIT_SCALE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack208,fVar13);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack192);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::PostureModule__set_scale_impl(*ppBVar12,fVar13,false);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack208,fVar13);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      puVar8 = local_60;
      goto LAB_710000d924;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_60,0xdf05c072b);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0x147676c29f);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,_FIGHTER_PURIN_STATUS_FINAL_FLAG_COMMON);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
      fVar13 = (float)lib::L2CValue::as_number((L2CValue *)local_60);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      app::lua_bind::WorkModule__add_float_impl(*ppBVar12,fVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,_FIGHTER_PURIN_STATUS_FINAL_FLAG_SET_MOTION_RATE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_60,0xde6c876be);
        HVar7 = lib::L2CValue::as_hash((L2CValue *)local_60);
        uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar12,HVar7);
        lib::L2CValue::L2CValue((L2CValue *)auStack192,uVar4);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        fVar13 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack208,fVar13);
        lib::L2CValue::operator_((L2CValue *)auStack192,aLStack208);
        lib::L2CValue::L2CValue(aLStack240);
        lib::L2CValue::L2CValue((L2CValue *)local_60,0);
        uVar5 = lib::L2CValue::operator_((L2CValue *)local_60,aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)local_60);
        }
        else {
          lib::L2CValue::operator_((L2CValue *)auStack224,aLStack176);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)local_60);
        }
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        fVar13 = (float)lib::L2CValue::as_number(aLStack240);
        app::lua_bind::MotionModule__set_rate_impl(*ppBVar12,fVar13);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_MOTION_RATE);
        fVar13 = (float)lib::L2CValue::as_number(aLStack240);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_FLAG_SET_MOTION_RATE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_60,0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)local_60,aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)local_60);
      puVar8 = local_60;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack208,fVar13);
      lib::L2CValue::operator_(aLStack208,aLStack176);
      lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue(aLStack208);
      puVar8 = auStack224;
    }
    lib::L2CValue::_L2CValue((L2CValue *)puVar8);
    lib::L2CValue::L2CValue(aLStack256,1.0);
    lib::L2CValue::L2CValue((L2CValue *)local_60,0xdf05c072b);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0xe57714226);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack272,iVar3);
    lib::L2CValue::L2CValue(aLStack288,(L2CValue *)auStack192);
    FUN_710000e4f0(aLStack208,aLStack256,aLStack272,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    fVar13 = (float)lib::L2CValue::as_number(aLStack208);
    app::lua_bind::AttackModule__set_attack_scale_impl(*ppBVar12,fVar13,false);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_ATTACK_SCALE);
    fVar13 = (float)lib::L2CValue::as_number(aLStack208);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_INIT_SCALE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack304,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack304);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
      lib::L2CValue::operator_((L2CValue *)local_60,(L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::operator_((L2CValue *)auStack224,aLStack240);
      lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)auStack192);
      lib::L2CValue::operator_((L2CValue *)auStack224,aLStack320);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue(aLStack320);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::PostureModule__set_scale_impl(*ppBVar12,fVar13,false);
      lib::L2CValue::L2CValue((L2CValue *)local_60,1.0);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_LAST_SCALE);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_60,fVar13);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::operator_((L2CValue *)auStack224,aLStack240);
      lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)auStack192);
      lib::L2CValue::operator_((L2CValue *)auStack224,aLStack320);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_PURIN_STATUS_FINAL_FLAG_COMMON);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_60,0xde6c876be);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)local_60);
      uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar12,HVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,uVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      fVar13 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack240,fVar13);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PURIN_STATUS_FINAL_FLAG_INIT_CAMERA_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)local_60,false);
      uVar5 = lib::L2CValue::operator__((L2CValue *)auStack304,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_60,0.0);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_60,
                   _FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_INIT_CAMERA_RATE_MOTION_FRAME);
        fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack304);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_60,_FIGHTER_PURIN_STATUS_FINAL_FLAG_INIT_CAMERA_RATE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)local_60,
                 _FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_INIT_CAMERA_RATE_MOTION_FRAME);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_60);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)auStack304);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack304);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)local_60);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      lib::L2CValue::L2CValue((L2CValue *)local_60,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_60,aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack224);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)local_60);
        lib::L2CValue::_L2CValue((L2CValue *)local_60);
      }
      puVar8 = auStack304;
LAB_710000d904:
      lib::L2CValue::_L2CValue((L2CValue *)puVar8);
LAB_710000d908:
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    puVar8 = auStack192;
LAB_710000d924:
    lib::L2CValue::_L2CValue((L2CValue *)puVar8);
  }
  lib::L2CValue::_L2CValue(aLStack176);
LAB_710000d930:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  local_60[0] = app::sv_camera_manager::dead_range(this->luaStateAgent);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_60);
  lib::L2CValue::L2CValue(aLStack208,0xdf05c072b);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0x1c1cce3a6d);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar13);
  lib::L2CValue::operator_((L2CValue *)auStack192,aLStack112);
  lib::L2CValue::operator_((L2CValue *)local_60,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack240,0x1be0ec4efe);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  uVar6 = lib::L2CValue::as_integer(aLStack240);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar13);
  lib::L2CValue::operator_(aLStack208,aLStack112);
  lib::L2CValue::operator_((L2CValue *)local_60,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue(aLStack240,0xdf05c072b);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1a345b23d5);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar13);
  lib::L2CValue::operator_((L2CValue *)auStack224,aLStack112);
  lib::L2CValue::operator_((L2CValue *)local_60,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack320,0x1dee600d30);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  uVar6 = lib::L2CValue::as_integer(aLStack320);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack240,fVar13);
  lib::L2CValue::operator_(aLStack240,aLStack112);
  lib::L2CValue::operator_((L2CValue *)local_60,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x31ed91fca);
  lib::L2CValue::operator_(pLVar9,aLStack208);
  lib::L2CValue::operator_((L2CValue *)auStack224);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x6895f72a4);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)local_60);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack240,fVar13);
  lib::L2CValue::L2CValue((L2CValue *)local_60,-1.0);
  uVar5 = lib::L2CValue::operator__(aLStack240,(L2CValue *)local_60);
  lib::L2CValue::_L2CValue((L2CValue *)local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator_((L2CValue *)auStack192);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x47a67e768);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x5b4ca7514);
    lib::L2CValue::operator_(pLVar9,aLStack176);
  }
  else {
    lib::L2CValue::operator_(aLStack176);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x47a67e768);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)local_60);
    lib::L2CValue::_L2CValue((L2CValue *)local_60);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x5b4ca7514);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)auStack192);
  }
  app::lua_bind::CameraModule__reset_camera_range_impl(*ppBVar12,0);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x11f63699bf);
  pcVar10 = (code *)lib::L2CValue::as_pointer(pLVar9);
  pRVar11 = (Rect *)(*pcVar10)();
  app::lua_bind::lib__Rect__load_from_l2c_table_impl(pRVar11,aLStack160);
  app::lua_bind::CameraModule__add_camera_range_rect_impl(*ppBVar12,pRVar11,0);
  operator_delete(pRVar11);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

