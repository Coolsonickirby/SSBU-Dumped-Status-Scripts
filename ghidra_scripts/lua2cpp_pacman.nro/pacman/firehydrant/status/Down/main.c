
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanFirehydrant::status::Down_main
          (L2CWeaponPacmanFirehydrant *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float *pfVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  undefined8 uVar14;
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
  undefined auStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  ppBVar12 = &this->moduleAccessor;
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_INIT_CENTER);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_SET_CENTER);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_KEEP_ANGLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_ROT_REVERSE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack256,0x977b64f66);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack256);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_DOWN_LIFE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_HIT_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  fVar13 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  fVar13 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_OFFSET);
  fVar13 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
  fVar13 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
  GVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_DOWN);
  uVar5 = lib::L2CValue::as_integer(aLStack304);
  uVar14 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar12,uVar5);
  lib::L2CValue::L2CValue(aLStack288,(float)uVar14);
  lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar14 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,aLStack288);
  lib::L2CValue::L2CValue(aLStack112,aLStack272);
  pLVar11 = aLStack112;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar11,0));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
  lib::L2CValue::operator_((L2CValue *)auStack208,pLVar8);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
  lib::L2CValue::operator_(aLStack240,pLVar8);
  lib::L2CAgent::math_atan((L2CAgent *)auStack208,aLStack240,pLVar11);
  pLVar8 = aLStack96;
  lib::L2CValue::operator_((L2CValue *)auStack192,pLVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar8);
  lib::L2CValue::operator_((L2CValue *)auStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_((L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack304,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::operator_((L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack304,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE_PRE);
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack304);
  fVar13 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,fVar13);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar13 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,fVar13);
  lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar13 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,fVar13);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar6 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_TOUCH_POS);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_ROT_LEFT);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack352,GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar12,uVar5);
    lib::L2CValue::L2CValue(aLStack384,*pfVar9);
    lib::L2CValue::L2CValue(aLStack368,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack96,aLStack384);
    lib::L2CValue::L2CValue(aLStack112,aLStack368);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_(aLStack224,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack160,pLVar8);
    lib::L2CValue::operator_(aLStack224,aLStack224);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack352,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_X);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::operator_(aLStack160,aLStack160);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack352,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_Y);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_DOWN_LEFT);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_TOUCH_POS);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack352,GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar12,uVar5);
    lib::L2CValue::L2CValue(aLStack336,*pfVar9);
    lib::L2CValue::L2CValue(aLStack320,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack96,aLStack336);
    lib::L2CValue::L2CValue(aLStack112,aLStack320);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_(aLStack224,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack160,pLVar8);
    lib::L2CValue::operator_(aLStack224,aLStack224);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack352,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_X);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::operator_(aLStack160,aLStack160);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack352,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_Y);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack96,0x41cff903b);
  HVar10 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (*ppBVar12,HVar10,-1.0,1.0,0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x41cff903b);
  HVar10 = lib::L2CValue::as_hash(aLStack112);
  uVar5 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar12,HVar10);
  lib::L2CValue::L2CValue(aLStack96,uVar5);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_frame_impl(*ppBVar12,fVar13,true);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack416,false);
    FUN_710003bef0(aLStack400,this,aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100040200);
  lib::L2CValue::operator_(pLVar8,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack432,&DAT_7100040260);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

